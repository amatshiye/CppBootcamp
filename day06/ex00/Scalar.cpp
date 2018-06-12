/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 10:08:09 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/12 12:57:21 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar() { }

Scalar::Scalar(std::string str)
{
    this->_str = str;
    toChar(str);
    toInt(str);
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
    char i = static_cast<char>(stoi(str));

    if (!(i < std::numeric_limits<int>::min()) || !(i > std::numeric_limits<int>::max()))
    {
        if (isprint(i) != 0)
            std::cout << "char: " << "'" << i << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: Impossible" << std::endl;
}

void    Scalar::toInt(std::string str)
{
    int i = static_cast<int>(stoi(str));

    if (!(i < std::numeric_limits<int>::min()) || !(i > std::numeric_limits<int>::max()))
        std::cout << "int: " << i << std::endl;
    else
        std::cout << "int: Impossible" << std::endl;
}

/*
void    Scalar::toFloat(std::string str)
{
    
}

void    Scalar::toDouble(std::string str)
{

}*/