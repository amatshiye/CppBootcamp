/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 07:42:12 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 07:42:13 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
    private:
        int HitPoints;
        int MaxHitPoints;
        int EnergyPoints;
        int MaxEnergyPoints;
        int Level;
        int MeleeAttack;
        int RangeAttack;
        int ArmorDamage;
        std::string name;

    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);

        FragTrap & operator=(FragTrap const & rhs);

        void rangedAttack(std::string const & target);

        //setters
        void setHitPoints(int hitPoints);
        void setMaxHitPoints(int maxHitPoints);
        void setEnergyPoints(int energyPoints);
        void setMaxEnergyPoints(int energyPoints);
        void setLevel(int level);
        void setMeleeAttack(int meleeAttack);
        void setRange(int rangeAttack);
        void setArmorDamage(int armorDamage);

        //getters
        std::string getName();
        int getHitPoints();
        int getMaxHitPoints();
        int getEnergyPoints();
        int getMaxEnergyPoints();
        int getLevel();
        int getMeleeAttack();
        int getRange();
        int getArmorDamage();
};

#endif