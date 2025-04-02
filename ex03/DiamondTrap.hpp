#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	public :
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & dt);
		~DiamondTrap(void);

		DiamondTrap& operator=(DiamondTrap const & dt);
		void	whoAmI(void);
	
	private :
		std::string _name;
};

#endif