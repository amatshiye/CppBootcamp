/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 09:45:36 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/14 11:08:55 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T>
void iter(T *array, int length, void (*f)(T const &))
{
    if (array)
    {
        for (int x = 0; x < length; x++)
            f(array[x]);
    }
}

template < typename T>
void ft_fun(T c)
{
    std::cout << "Output: " << c << std::endl;
}

int main(void)
{
    char array[] = {'a', 'b', 'c'};

    iter(array, strlen(array), ft_fun);
    return (0);
}