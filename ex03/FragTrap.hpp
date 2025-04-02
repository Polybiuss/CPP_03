#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :  virtual public ClapTrap{
	public :
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & ft);
		~FragTrap(void);

		FragTrap & operator=(FragTrap const & ft);
		void	highFiveGuys(void);
};

#endif