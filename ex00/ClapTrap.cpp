#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name){
	std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cp){
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & cp){
	this->_name = cp.getName();
	this->_hitPoint = cp.getHitPoint();
	this->_energyPoint = cp.getEnergyPoint();
	this->_AttackDamage = cp.getAttackDamage();
	return *this;
}

int	ClapTrap::getHitPoint(void)const {
	return this->_hitPoint;
}

int ClapTrap::getEnergyPoint(void)const {
	return this->_energyPoint;
}

int ClapTrap::getAttackDamage(void)const {
	return this->_AttackDamage;
}

int ClapTrap::getName(void)const {
	return this->_name;
}