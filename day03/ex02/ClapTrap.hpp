#ifndef __CLAPTRAP__
#define __CLAPTRAP__

#include <iostream>

class ClapTrap
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
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap(void);

        ClapTrap & operator=(ClapTrap const & rhs);

        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setTarget(std::string target);
        //get Name
        std::string getTarget();
        std::string getName();
        int getRangeAttack();
        int getMeleeAttack();
};

#endif