/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 07:41:58 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 07:42:02 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->HitPoints = 100;
    this->MaxHitPoints = 100;
    this->EnergyPoints = 100;
    this->MaxEnergyPoints = 100;
    this->Level = 1;
    this->MeleeAttack = 30;
    this->RangeAttack = 20;
    this->ArmorDamage = 5;
}

FragTrap::FragTrap(std::string name) 
{ 
}

FragTrap::~FragTrap()
{
    
}

//getters
std::string FragTrap::getName() { return this->name; }

int FragTrap::getRange() { return this->RangeAttack; }

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << this->getName() << " attacks " << target << " at range," <<
    "causing " << this->getRange() << " points of damage !" << std::endl;
}