#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	std::cout << "Default constructor claptrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name){
	_hitPoint = 10;
	_attackDamage = 0;
	_energyPoint = 10;
	std::cout << "String constructor claptrap called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cp){
	std::cout << "Copy constructor calptrap called" << std::endl;
	*this = cp;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor claptrap called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & cp){
	this->_name = cp.getName();
	this->_hitPoint = cp.getHitPoint();
	this->_energyPoint = cp.getEnergyPoint();
	this->_attackDamage = cp.getAttackDamage();
	return *this;
}

int	ClapTrap::getHitPoint(void)const {
	return this->_hitPoint;
}

int ClapTrap::getEnergyPoint(void)const {
	return this->_energyPoint;
}

int ClapTrap::getAttackDamage(void)const {
	return this->_attackDamage;
}

void ClapTrap::setHitPoint(int hp){
	_hitPoint = hp;
}

void ClapTrap::setEnergyPoint(int ep){
	_energyPoint = ep;
}

void ClapTrap::setAttackDamage(int ad){
	_attackDamage = ad;
}

std::string ClapTrap::getName(void)const {
	return this->_name;
}

void ClapTrap::setName(std::string name){
	_name = name;
}

void	ClapTrap::attack(std::string const & target){
	if (_hitPoint <= 0)
		std::cout << "Claptrap " << _name << " is dead can't attack anymore" << std::endl;
	else if (_energyPoint > 0)
	{
		std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		--_energyPoint;
	}
	else
		std::cout << "You don't have enough energy point to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoint > 0)
	{
		std::cout << "Claptrap " << _name << " take " << amount << " of damage" << std::endl;
		_hitPoint -= amount;
	}
	else
		std::cout << "Claptrap " << _name << " already dead!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_hitPoint <= 0)
		std::cout << "Claptrap " << _name << "can't be repared, is alredy dead" << std::endl;
	else if (_energyPoint > 0){
		std::cout << "Claptrap " << _name << " repair himself" << amount << " of health" << std::endl;
		--_energyPoint;
		_hitPoint += amount;
	}
	else
		std::cout << "Claptrap " << _name << "can't be repaired he dont ahve enough energy!" << std::endl;
}