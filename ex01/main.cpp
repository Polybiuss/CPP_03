#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	ScavTrap s1("jojo");
	// ClapTrap c1("toto");
	s1.guardGate();
	s1.attack("toto");
	// ScavTrap sp("jojo");
	// sp.takeDamage(100);
	// ScavTrap s1(sp);
	// s1 = sp;
	// s1.beRepaired(1);
	return (0);
}