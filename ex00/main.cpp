#include "ClapTrap.hpp"

int main(void){
	ClapTrap clptp("CL4PTP");
	clptp.attack("Jack");
	clptp.takeDamage(11);
	clptp.attack("jack");
	clptp.beRepaired(2);
	clptp.takeDamage(1);
	return (0);
}