#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
	private :
		int _hitPoint;
		int _energyPoint;
		int _attackDamage;
		std::string _name;
	
	public :
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & cp);
		~ClapTrap(void);

		ClapTrap& operator=(ClapTrap const & fr);
		int				getHitPoint(void)const;
		int				getEnergyPoint(void)const;
		int 			getAttackDamage(void)const;
		void			setHitPoint(int hp);
		void			setEnergyPoint(int ep);
		void			setAttackDamage(int ad);
		std::string 	getName(void)const;
		void			setName(std::string name);

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif