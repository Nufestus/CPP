/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:54:18 by aammisse          #+#    #+#             */
/*   Updated: 2025/06/27 21:40:46 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(NULL);
    std::tm* localTime = std::localtime(&now);

    std::cout << "["
              << (1900 + localTime->tm_year)
              << ((localTime->tm_mon + 1) < 10 ? "0" : "") << (localTime->tm_mon + 1)
              << (localTime->tm_mday < 10 ? "0" : "") << localTime->tm_mday
              << "_"
              << (localTime->tm_hour < 10 ? "0" : "") << localTime->tm_hour
              << (localTime->tm_min < 10 ? "0" : "") << localTime->tm_min
              << (localTime->tm_sec < 10 ? "0" : "") << localTime->tm_sec
              << "] ";
}

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:"
                << this->_accountIndex << ";amount:"
                << this->_amount << ";created"
                << std::endl;
    Account::_nbAccounts += 1;
    Account::_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
}

Account::~Account()
{
    Account::_displayTimestamp();
    std::cout << "index:"
                << this->_accountIndex << ";amount:"
                << this->_amount << ";closed"
                << std::endl;
}

void Account::makeDeposit(int deposit)
{
    this->_nbDeposits += 1;
    Account::_displayTimestamp();
    std::cout << "index:"
                << this->_accountIndex << ";p_amount:"
                << this->_amount << ";deposit:" << deposit
                << ";amount:" << this->_amount + deposit
                << ";nb_deposits:" << this->_nbDeposits
                << std::endl;
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;
}

bool Account::makeWithdrawal(int withdrawal)
{   
    Account::_displayTimestamp();
    if (withdrawal <= this->_amount)
    {
        this->_nbWithdrawals += 1;
        std::cout << "index:"
                << this->_accountIndex << ";p_amount:"
                << this->_amount << ";withdrawal:" << withdrawal
                << ";amount:" << this->_amount - withdrawal
                << ";nb_withdrawals:" << this->_nbWithdrawals
                << std::endl;
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals += 1;
        return (true);
    }
    else
    {
        std::cout << "index:"
                << this->_accountIndex << ";p_amount:"
                << this->_amount << ";withdrawal:refused"
                << std::endl;
        return (false);
    }
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

void    Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
                << ";amount:" << this->_amount
                << ";deposits:" << this->_nbDeposits
                << ";withdrawals:" << this->_nbWithdrawals
                << std::endl;
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:"
                << Account::getNbAccounts() << ";total:"
                << Account::getTotalAmount() << ";deposits:"
                << Account::getNbDeposits() << ";withdrawals:"
                << Account::getNbWithdrawals()
                << std::endl;
}

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}