/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 10:08:09 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/12 17:59:03 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar() { }

Scalar::Scalar(std::string str)
{
    this->_str = str;
}

Scalar::Scalar(Scalar const & src) { *this = src; }

Scalar::~Scalar(void) {}

Scalar &Scalar::operator=(Scalar const &rhs) 
{
    this->_str = rhs._str; 
    return *this;
}

std::string Scalar::getString() { return (this->_str); }

void    Scalar::toChar(std::string str)
{
    try
    {
        char i = static_cast<char>(stoi(str));

        if (isprint(i) != 0)
            std::cout << "char: " << "'" << i << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    catch (std::exception &e)
    {
        e.what();
        std::cout << "char: Impossible" << std::endl;        
    }
}

void    Scalar::toInt(std::string str)
{
    try
    {
        int i = static_cast<int>(stoi(str));
        std::cout << "int: " << i << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "int: Impossible" << std::endl;
        e.what();
    }
}

void    Scalar::toFloat(std::string str)
{
    int pre = getPrecision(str);
    if (pre > 6)
        pre = 6;
    // float g = stof(str);
    // std::cout << g << std::endl;
    try
    {
        //float precison
        float i = static_cast<float>(stof(str));
        std::cout << std::fixed;
        std::cout << std::setprecision(pre);
        std::cout << "float: " << i << "f" << std::endl;
    }
    catch(std::exception& e)
    {
        e.what();
        std::cout << "float: Impiossible" << std::endl; 
    } 
}

void    Scalar::toDouble(std::string str)
{
    int pre = getPrecision(str);
    if (pre > 15)
        pre = 15;

    try
    {
        //float precison
        double i = static_cast<double>(stod(str));
        std::cout << std::fixed;
        std::cout << std::setprecision(pre);
        std::cout << "double: " << i << std::endl;
    }
    catch(std::exception& e)
    {
        e.what();
        std::cout << "double: Impiossible" << std::endl; 
    } 
}

int Scalar::checkString(std::string str)
{
    for (unsigned int x = 0; x < str.length(); x++)
    {
        if ((str[x] != 'f') && !(str.size() > 1) && (isalpha(str[x])))
            return (1);
        continue;
    }
    return (0);
}

int Scalar::getPrecision(std::string str)
{
    if (str.find('.') != std::string::npos)
    {
        std::string after_dp = str.substr(str.find(".") + 1);
        this->_precision = after_dp.length();
        if (after_dp.find('f') != std::string::npos)
            return (this->_precision - 1);            
        return (this->_precision);
    }
    return (1);
}