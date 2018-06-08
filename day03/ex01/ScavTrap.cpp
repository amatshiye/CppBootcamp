/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:16:50 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 16:16:53 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : HitPoints(100), MaxHitPoints(100), EnergyPoints(50),
MaxEnergyPoints(50), Level(1), MeleeAttack(20), RangeAttack(15), ArmorDamage(3)
{
    std::cout << "Watch as my enemies face my Death Metal Arm of Death!!!\n";
    this->name = "ScavOne";
    return;
}

ScavTrap::ScavTrap(std::string name) : HitPoints(100), MaxHitPoints(100), EnergyPoints(50),
MaxEnergyPoints(50), Level(1), MeleeAttack(20), RangeAttack(15), ArmorDamage(3)
{
    std::cout << "I shall devour all of you. And that's not what she said!!!\n";
    this->name = name;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Death, death everywhere\n";
    return;
}

std::string ScavTrap::getName() { return this->name; }
int ScavTrap::getMeleeAttack() { return this->MeleeAttack; }
int ScavTrap::getRangeAttack() { return this->RangeAttack; }
void ScavTrap::setTarget(std::string target) { this->target = target; }
std::string ScavTrap::getTarget() { return this->target; }

void ScavTrap::rangedAttack(std::string const & target)
{
    this->setTarget(target);
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range," <<
    "causing " << this->RangeAttack << " points of damage !\n";
    this->takeDamage(this->RangeAttack);
    return;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    //melee attack function
    this->setTarget(target);    
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " with a melee attack," <<
    "causing " << this->MeleeAttack << " points of damage !\n";
    this->takeDamage(this->MeleeAttack);

    return;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    //take damage function
    if (HitPoints >= 30 && amount == 30)
    {
        std::cout << this->name << " got attacked by " << this->getTarget() << std::endl;
        std::cout << this->name << " is left with " << this->HitPoints << " HitPoints\n";        
    }
    else if (HitPoints >= 20 && amount <= 20)
    {
        this->HitPoints = this->HitPoints - amount;
        std::cout << this->name << " got attacked by " << this->getTarget() << std::endl;
        std::cout << this->name << " is left with " << this->HitPoints << " HitPoints\n"; 
    }
    else
    {
        std::cout << "Hit points too low. Repairing...\n";
        this->beRepaired(10);
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    //beRepaired function
    if ((this->HitPoints + amount) >= 100)
        this->HitPoints = 100;
    else
        this->HitPoints = this->HitPoints + amount;
    std::cout << "HP repaired. Current HP: " << this->HitPoints << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    srand(time(0));
    std::string challenges[] = {"Whack the chickens to death", "Death Match of Death", "Duck duck challenge", "Unicorn Fight!!!", "Unicorn of Death!!!"};
    std::cout << "Chosen challenge: " << challenges[rand() % 5] << std::endl;
}