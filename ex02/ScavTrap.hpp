#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & st);
		~ScavTrap(void);

		void	guardGate(void)const;
		void attack(const std::string& target);
		ScavTrap& operator=(ScavTrap const & sp);
};

#endif