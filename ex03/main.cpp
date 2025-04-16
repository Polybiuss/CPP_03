#include "DiamondTrap.hpp"

int main(void){
	DiamondTrap dt("jojo");
	dt.whoAmI();
	dt.takeDamage(100);
	DiamondTrap t1 = dt;
	t1.attack("yolo");
	t1.guardGate();
	t1.highFiveGuys();
	return (0);
}