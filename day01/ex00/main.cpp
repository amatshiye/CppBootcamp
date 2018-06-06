/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 07:19:29 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/06 18:14:35 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap()
{
    //allocated on the heap
    Pony* HeapPony = new Pony("red", 4);
    std::cout << "Memory about tp be killed\n";
    delete HeapPony; //Preventing memory leaks
}

void ponyOnTheStack()
{
    Pony StackPony("Pink", 10);
    std::cout << "To be killed at run-time\n";
    //allocated on the stack
}

int main()
{
    std::cout << "Calling the heap Pony\n";
    ponyOnTheHeap();
    std::cout << "Calling the stack Pony\n";
    ponyOnTheStack();
    std::cout << "All ponies are dead\n";
    return (0);
}
