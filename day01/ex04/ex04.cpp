/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:27:22 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/06 17:27:53 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string brainStr = "HI THIS IS BRAIN";
    
    std::string* brainPtr = &brainStr;
    std::string& brainRef = brainStr;

    std::cout << *brainPtr << std::endl;
    std::cout << brainRef << std::endl;

    return (0);
}
