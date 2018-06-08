/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:16:59 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 16:17:01 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include <iostream>
#include <ctime>

class ScavTrap
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
        std::string target;
        std::string name;

        public:
            ScavTrap(void);
            ScavTrap(std::string name);
            ScavTrap(ScavTrap const & src);
            ~ScavTrap(void);

            std::string getName();
            ScavTrap & operator=(ScavTrap const & rhs);
            
            void rangedAttack(std::string const & target);
            void meleeAttack(std::string const & target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
            void setTarget(std::string target);
            void challengeNewcomer();
            //get Name
            std::string getTarget();
            int getRangeAttack();
            int getMeleeAttack();
};

#endif