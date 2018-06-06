/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 07:20:17 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/06 07:20:22 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <iostream>

class Pony
{
    std::string color;
    int         weight;

    public:
        Pony(std::string color, int weight);
        ~Pony();

        std::string getColor();
        int         getWeight();

        void        setColor(std::string color);
        void        setWeight(int weight);
};

#endif
