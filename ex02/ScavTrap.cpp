#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
	this->setName("default_scavtrap");
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
	std::cout << "Copy Scavtrap constrcutor called";
	this->setName(st.getName());
	this->setHitPoint(st.getHitPoint());
	this->setEnergyPoint(st.getEnergyPoint());
	this->setAttackDamage(st.getAttackDamage());
}

ScavTrap &ScavTrap::operator=(ScavTrap const & st){
	this->setName(st.getName());
	this->setHitPoint(st.getHitPoint());
	this->setEnergyPoint(st.getEnergyPoint());
	this->setAttackDamage(st.getAttackDamage());
	return *this;
}

void	ScavTrap::guardGate(void) const{
	std::cout << "ScavTrap " << this->getName() << " is now in gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const & target){
	std::cout << "Scavtrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}