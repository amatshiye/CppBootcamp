/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 10:07:16 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/12 17:44:38 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

void    _execute(std::string str)
{
    Scalar s(str);

    std::cout << std::numeric_limits<double>::digits10 << std::endl;
    //std::cout << FLOAT_DIG << std::endl;
    
    s.toChar(s.getString());
    s.toInt(s.getString());
    s.toFloat(s.getString());
    s.toDouble(s.getString());
}

int main(int ac, char **av)
{
    if (ac != 1)
    {
        _execute(av[1]);
    }
    return (0);
}