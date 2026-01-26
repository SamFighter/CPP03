#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap the og is born" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_GateMode = false;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << this->_Name << " IS BORN OMG WHAT A SLAAAAYER" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_GateMode = false;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& toCopy) : ClapTrap(toCopy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap disappear in the abyss to recover his lost power !" << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_Name = toCopy._Name;
	this->_HitPoints = toCopy._HitPoints;
	this->_EnergyPoints = toCopy._EnergyPoints;
	this->_AttackDamage = toCopy._AttackDamage;
	return (*this);
}

void	ScavTrap::guardGate(void) {
	if (this->_GateMode == false) {
		std::cout << "ScavTrap " << this->_Name << " gate keeper mode activated" << std::endl;
		this->_GateMode = true;
	}
	else
		std::cout << "ScavTrap " << this->_Name << " is already in gate keeper mode, RTFM bro" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_HitPoints <= 0)
		std::cout << "ScavTrap " << this->_Name << " is dead, it can't attack" << std::endl;
	else if (this->_EnergyPoints == 0)
		std::cout << "ScavTrap " << this->_Name << " can't attacks" << std::endl;
	else {
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage and it cost 1 energy!     (" << this->_EnergyPoints << " energy left)" << std::endl;
		this->_EnergyPoints--;
	}
	return ;
}
