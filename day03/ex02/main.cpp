/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp          sd                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 07:42:19 by amatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 07:42:24 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap trap_2("Afrika");

    trap_2.rangedAttack("Death Bot... of Death");
    trap_2.vaulthunter_dot_exe("Death Bot X");
    trap_2.rangedAttack("Death Bot X 4");    
    trap_2.takeDamage(15);

    std::cout<< "---------------------------------\n";
    std::cout<< "Enter Mr Scavy\n";    
    std::cout<< "---------------------------------\n";
    ScavTrap scav1;
    ScavTrap scav("Devour");

    scav.rangedAttack("Human man");
    scav.challengeNewcomer();
    return (0);
}