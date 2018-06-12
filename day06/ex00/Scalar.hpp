/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 10:06:07 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/12 12:57:24 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALAR_HPP__
#define __SCALAR_HPP__

#include <iostream>
#include <iomanip>
#include <limits>

class Scalar
{
    private:
        std::string  _str;
        
    public:
        Scalar(void);
        Scalar(std::string  str);
        Scalar(Scalar const & src);
        ~Scalar(void);
        
        Scalar &operator=(Scalar const &rhs);
        std::string getString();

        void    toInt(std::string       str);
        void    toChar(std::string      str);
        void    toFloat(std::string     str);
        void    toDouble(std::string    str);
};
#endif