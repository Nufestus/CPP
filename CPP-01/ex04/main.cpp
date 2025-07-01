/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:31:27 by aammisse          #+#    #+#             */
/*   Updated: 2025/06/30 14:19:07 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replacestrings(std::string input, std::string s1, std::string s2)
{
    size_t pos = 0;
    while ((pos = input.find(s1, pos)) != std::string::npos)
    {
        std::cout << pos << std::endl;
        input.erase(pos, s1.length());
        input.insert(pos, s2, 0, s2.length());
        pos += s2.length();
    }
    return input;
}

int main(int ac, char **av)
{
    std::string myfile;
    std::string line;
    std::string final;
    std::string output;
    std::string s1;
    std::string s2;

    if (ac != 4)
    {
        std::cout << "Invalid Input, try \"<filename> <s1> <s2>\"." << std::endl;
        return 1;
    }

    myfile = av[1];
    s1 = av[2];
    s2 = av[3];
    
    std::ifstream file(myfile.c_str());

    if (!file)
    {
        std::cout << "Couldnt open file!" << std::endl;
        return 1;
    }

    output = myfile + ".replace";
    std::ofstream out(output.c_str());

    while(std::getline(file, line))
    {
        line += "\n";
        if (!s1.empty())
            line = replacestrings(line, s1, s2);
        out << line;
    }


    out.close();
    file.close();
}