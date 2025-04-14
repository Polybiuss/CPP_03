#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	FragTrap ft("jason");
	ScavTrap st;
	ft.attack("jojo");
	FragTrap ft1(ft);
	ft1.highFiveGuys();
	return (0);
}