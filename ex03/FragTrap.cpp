#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(){
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
	std::cout << "Default constructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
	std::cout << "String constructor Fragtrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & ft){
	std::cout << "Copy constructor Fragtrap called" << std::endl;
	*this = ft;
}

FragTrap::~FragTrap(void){
	std::cout << "Default destructor Fragtrap called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const & ft){
	this->setName(ft.getName());
	this->setHitPoint(ft.getHitPoint());
	this->setEnergyPoint(ft.getEnergyPoint());
	this->setAttackDamage(ft.getAttackDamage());
	return *this;
}

void FragTrap::highFiveGuys(void){
	std::cout << "Fragtrap " << getName() << " give you a high five!" << std::endl;
}
