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
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);

        FragTrap & operator=(FragTrap const & rhs);

        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        virtual void vaulthunter_dot_exe(std::string const & target);
        void setTarget(std::string target);
        //get Name
        std::string getTarget();
        std::string getName();
        int getRangeAttack();
        int getMeleeAttack();
};

#endif