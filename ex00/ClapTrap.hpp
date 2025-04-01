#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
	private :
		int _hitPoint = 10;
		int _energyPoint = 10;
		int _AttackDamage = 0;
		std::string _name;
	
	public :
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & cp);
		~ClapTrap(void);

		ClapTrap& operator=(ClapTrap const & fr);
		int	getHitPoint(void)const;
		int	getEnergyPoint(void)const;
		int getAttackDamage(void)const;
		int getName(void)const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif