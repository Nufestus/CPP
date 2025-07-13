#include "Fixed.hpp"

const int Fixed::fract_point = 8;

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

int Fixed::toInt() const
{
    return (this->fixed_point >> this->fract_point);
}

float Fixed::toFloat() const
{
    return (this->fixed_point / 256.0f);
}

Fixed::Fixed(const float num) : fixed_point(0)
{
    fixed_point = std::roundf(num * 256.0f);
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int value) : fixed_point(0)
{
    fixed_point = value << this->fract_point;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (*this != other)
        this->fixed_point = other.fixed_point;
    return (*this);
}

bool Fixed::operator>(const Fixed& other) const
{
    if (this->fixed_point > other.fixed_point)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed& other) const
{
    if (this->fixed_point < other.fixed_point)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed& other)
{
    if (this->fixed_point >= other.fixed_point)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed& other)
{
    if (this->fixed_point <= other.fixed_point)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed& other)
{
    if (this->fixed_point == other.fixed_point)
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed& other)
{
    if (this->fixed_point != other.fixed_point)
        return true;
    return false;
}

Fixed Fixed::operator+(const Fixed& other)
{
    Fixed result;
    result.fixed_point = (this->fixed_point + other.fixed_point);
    return (result);
}

Fixed Fixed::operator-(const Fixed& other)
{
    Fixed result;
    result.fixed_point = (this->fixed_point - other.fixed_point);
    return (result);
}

Fixed Fixed::operator*(const Fixed& other)
{
    Fixed result;
    result.fixed_point = (this->fixed_point * other.fixed_point) >> this->fract_point;
    return (result);
}

Fixed Fixed::operator/(const Fixed& other)
{
    Fixed result;
    result.fixed_point = ((this->fixed_point << this->fract_point) / other.fixed_point);
    return (result);
}

Fixed& Fixed::operator++()
{
    this->fixed_point++;
    return (*this);
}

Fixed& Fixed::operator--()
{
    this->fixed_point--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed Copy(*this);
    this->fixed_point++;
    return (Copy);
}

Fixed Fixed::operator--(int)
{
    Fixed Copy(*this);
    this->fixed_point--;
    return (Copy);
}

Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
    return (num1 > num2) ? num2 : num1;
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2)
{
    return (num1 > num2) ? num2 : num1;
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
    return (num1 < num2) ? num2 : num1;
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
    return (num1 < num2) ? num2 : num1;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}
