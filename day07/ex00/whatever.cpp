/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 07:28:51 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/14 13:55:01 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T >
void swap(T & a, T & b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
    return ;
}

template < typename T>
T const  max(T const & x, T const & y)
{
    return (x > y ? x : y);
}

template < typename T>
T const  min(T const & a, T const & b)
{
    return (a > b ? b : a);
}

int main(void)
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    return (0);
}