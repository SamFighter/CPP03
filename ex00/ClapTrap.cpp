#include "ClapTrap.hpp"

/******************Constructor/Destructor*******************/

ClapTrap::ClapTrap() {
  	this->_Name = "OG ClapTrap";
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	std::cout << "Classic Claptrap is born" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) {
	this->_Name = Name;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	std::cout << _BLUE << Name << _CLEAR << " just born from a prestigious robot company" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy) {
	std::cout << "[constructor copy called]" << std::endl;
	*this = toCopy;
}

ClapTrap::~ClapTrap() {
	std::cout << "Unity ClapTrap " << this->_Name << " returned in the god embraces" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_Name = toCopy._Name;
	this->_HitPoints = toCopy._HitPoints;
	this->_EnergyPoints = toCopy._EnergyPoints;
	this->_AttackDamage = toCopy._AttackDamage;
	return (*this);
}

/************************Getter*****************************/

int ClapTrap::getHitPoints( void ) const {
	return (this->_HitPoints);
}

int ClapTrap::getEnergyPoints( void ) const {
	return (this->_EnergyPoints);
}

int ClapTrap::getAttackPoints( void ) const {
	return (this->_AttackDamage);
}

/************************Action*****************************/

void	ClapTrap::attack(const std::string& target) {
	if (_EnergyPoints > 0)
	{
		_EnergyPoints = _EnergyPoints - 1;
		std::cout << "ClapTrap " << this->_Name << " : " << target << " took a lot of damage : " << _AttackDamage << " and it cost 1 energy ! (" << _EnergyPoints << "/10)" << std::endl;
	}
	else
		std::cout << "No more power to attack !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_HitPoints - amount <= 0) {
		std::cout << "ClapTrap " << this->_Name << " : " << "NAAAAAAAAAAAAAH I'M DYING ! CRUEL WORLLLLLD !" << std::endl;
	}
	else if (amount == 0) {
		std::cout << "ClapTrap " << this->_Name << " : " << "Hahaha loser you did nothing !" << std::endl;
	}
	else
	{
		_HitPoints = _HitPoints - amount;
		std::cout << "ClapTrap " << this->_Name << " : " << "AAAAAAAAAAAAARRG I TOOK " << amount << " DAMAGE AND I DON'T KNOW WHY ! I still have " << _HitPoints << " left !" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_EnergyPoints > 0)
	{
		_EnergyPoints = _EnergyPoints - 1;
		_HitPoints = _HitPoints + amount;
		std::cout << "bzzzztt... repair is done ! [PV = " << _HitPoints << " + " << amount << "] and it cost 1 energy ! (" << _EnergyPoints << "/10)"  << std::endl;
	}
	else
		std::cout << "No more energy ! Impossible to repair !" << std::endl;
}

