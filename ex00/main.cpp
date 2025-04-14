#include "ClapTrap.hpp"

int main(void){
	ClapTrap clptp;
	clptp.attack("Jack");
	clptp.takeDamage(11);
	ClapTrap c1 = clptp;
	c1.attack("jack");
	c1.beRepaired(2);
	c1.takeDamage(1);
	return (0);
}