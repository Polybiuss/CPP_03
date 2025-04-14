#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	ScavTrap s1("bob");
	s1.guardGate();
	s1.attack("toto");
	ScavTrap s2 = s1;
	s2.attack("toto");
	s2.takeDamage(100);
	s2.beRepaired(1);
	return (0);
}