#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("default_diamondtrap_clap_name"), _name("default_diamondtrap"){
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(30);
	std::cout << "Default constructor DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), _name(name){
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(30);
	std::cout << "String constructor DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & dt){
	std::cout << "Copy constructor DiamondTrap called" << std::endl;
	ClapTrap::setName(dt.getName());
	this->_name = dt._name;
	this->setHitPoint(dt.getHitPoint());
	this->setEnergyPoint(dt.getEnergyPoint());
	this->setAttackDamage(dt.getAttackDamage());
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "Default destructor DiamondTrap called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & dt){
	ClapTrap::setName(dt.getName());
	this->_name = dt._name;
	this->setHitPoint(dt.getHitPoint());
	this->setEnergyPoint(dt.getEnergyPoint());
	this->setAttackDamage(dt.getAttackDamage());
	return *this;
}

void DiamondTrap::whoAmI(void){
	std::cout << "i am " << this->_name << " or i am" << this->getName() << std::endl;
}