/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <amatshiy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 09:45:36 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/14 16:36:09 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T>
void iter(T *array, unsigned int length, void (*f)(T))
{
    if (array)
    {
        for (unsigned int x = 0; x < length; x++)
            f(array[x]);
    }
}

template < typename T>
void ft_fun(T c)
{
    std::cout << c << std::endl;
}

int main(void)
{
    char array[] = {'a', 'b', 'c'};

    iter(array, 3, ft_fun);
    return (0);
}