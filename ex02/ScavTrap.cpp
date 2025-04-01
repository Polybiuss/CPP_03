#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
	std::cout << "default constructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
	std::cout << "Constructor string Scavtrap called" << std::endl;
} 

ScavTrap::~ScavTrap(void){
	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & st){
	*this = st;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & sp){
	this->setName(sp.getName());
	this->setHitPoint(sp.getHitPoint());
	this->setEnergyPoint(sp.getEnergyPoint());
	this->setAttackDamage(sp.getAttackDamage());
	return *this;
}

void	ScavTrap::guardGate(void) const{
	std::cout << "ScavTrap " << this->getName() << " is now in gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const & target){
	std::cout << "Scavtrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}