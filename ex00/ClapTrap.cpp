#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _hitPoint(10), _energyPoint(10), _attackDamage(10), _name("default_trap"){
	std::cout << "Default constructor claptrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name){
	_hitPoint = 10;
	_attackDamage = 10;
	_energyPoint = 10;
	std::cout << "String constructor claptrap called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cp){
	std::cout << "Copy constructor calptrap called" << std::endl;
	_hitPoint = cp._hitPoint;
	_energyPoint = cp._energyPoint;
	_attackDamage = cp._attackDamage;
	_name = cp._name;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor claptrap called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & cp){
	_hitPoint = cp._hitPoint;
	_energyPoint = cp._energyPoint;
	_attackDamage = cp._attackDamage;
	_name = cp._name;
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

std::string ClapTrap::getName(void)const {
	return this->_name;
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
		std::cout << "Claptrap " << _name << "repair himself" << amount << " of health" << std::endl;
		--_energyPoint;
		_hitPoint += amount;
	}
	else
		std::cout << "Claptrap " << _name << "can't be repaired he dont ahve enough energy!" << std::endl;
}