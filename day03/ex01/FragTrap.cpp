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

FragTrap::FragTrap(void) : HitPoints(100), MaxHitPoints(100), EnergyPoints(100),
MaxEnergyPoints(100) , Level(1), MeleeAttack(30), RangeAttack(20), ArmorDamage(5)
{
    std::cout << "As I wish death to everybody. Let the game begin\n";
    this->name = "Default user";
    return;
}

FragTrap::FragTrap(std::string name) : HitPoints(100), MaxHitPoints(100), EnergyPoints(100),
MaxEnergyPoints(100) , Level(1), MeleeAttack(30), RangeAttack(20), ArmorDamage(5)
{ 
    this->name = name;
    std::cout << name << " is ready to die. Current Level: " << this->Level << std::endl;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "Death is upon everyone. Muhahahahahahahahahahaha\n";
    return;
}

//getters
std::string FragTrap::getName() { return this->name; }
int FragTrap::getMeleeAttack() { return this->MeleeAttack; }
int FragTrap::getRangeAttack() { return this->RangeAttack; }
void FragTrap::setTarget(std::string target) { this->target = target; }
std::string FragTrap::getTarget() { return this->target; }

void FragTrap::rangedAttack(std::string const & target)
{
    this->setTarget(target);
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range," <<
    "causing " << this->RangeAttack << " points of damage !\n";
    this->takeDamage(this->RangeAttack);
    return;
}

void FragTrap::meleeAttack(std::string const & target)
{
    //melee attack function
    this->setTarget(target);    
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " with a melee attack," <<
    "causing " << this->MeleeAttack << " points of damage !\n";
    this->takeDamage(this->MeleeAttack);

    return;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
{
    //beRepaired function
    if ((this->HitPoints + amount) >= 100)
        this->HitPoints = 100;
    else
        this->HitPoints = this->HitPoints + amount;
    std::cout << "HP repaired. Current HP: " << this->HitPoints << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    //vaulthunter function
    std::string specialAttack[] = {"Death Punch of death!", "Super Double Punch of Death", "Flash Punch", "Lightning Strike of Death of Death", "Double Uppercut"};

    if (this->EnergyPoints >= 25)
    {
        this->EnergyPoints = this->EnergyPoints - 25;
        std::cout << "FR4G-TP " << this->name << " attacks " << target << " with " << specialAttack[rand() % 5] << 
        ", causing " << 40 << " points of damage !" << std::endl;
        std::cout << this->getName() << " is left with " << this->EnergyPoints << " Energy Points now\n";
    }
    else
        std::cout << "You don't have enough energy\n";
}