/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:48:19 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/13 18:28:44 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heap.hpp"

int getRandomInt()
{
    srand(time(0));
    int randInts[] = {1, 7, 3, 6, 0, 9, 5, 6, 7, 3, 7, 6, 5};

    int n = randInts[rand() % 13];   
    std::cout << "Debug 1" << std::endl;
    
    return n;
}

void getRandomArray(char *str)
{
    srand(time(0));
    char randChars[] = {'a', 'b', 'y', '8', '0', '3', '6', '5', '1', '4', 'f', 't', 'o', 'l', 'p'};

    for (int x = 0; x < 8; x++)
        str[x] = randChars[rand() % 15];
    std::cout << "Debug 1" << std::endl;
}

void * serialize( void )
{
    Serialize * seri = new Serialize();

    getRandomArray(seri->_s1);
    getRandomArray(seri->_s2);
    seri->_n = getRandomInt();
    
    return reinterpret_cast<void *>(seri);
}

Data * deserialize( void * raw )
{
    Serialize *seri = new Serialize();
    Data *data;

    data = reinterpret_cast<Data *>(raw);
    data->s1 = static_cast<std::string>(seri->_s1);
    data->s2 = static_cast<std::string>(seri->_s2);
    data->n = static_cast<int>(seri->_n);

    return (data);
}

int main(void)
{
    std::cout << "Ser: " << reinterpret_cast<void *>(serialize) << std::endl;
   // std::cout << "Array from Struct: " << s._s1 << std::endl;

    return (0);
}