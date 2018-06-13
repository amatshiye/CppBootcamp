/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <amatshiy@42.FR>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:52:32 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/13 18:17:46 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEAP_HPP__
#define __HEAP_HPP__

#include <iostream>

struct Data 
{
    std::string s1;
    std::string s2;
    int n;
};

struct Serialize
{
    char _s1[9];
    char _s2[9];
    int _n;
};

#endif