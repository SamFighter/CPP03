#include "ClapTrap.hpp"

/******************Constructor/Destructor*******************/

ClapTrap::ClapTrap() {
  	this->_Name = "default";
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string Name) {
	this->_Name = Name;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	std::cout << Name << " just born from a prestigious robot company" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy) {
	this = toCopy;
}

ClapTrap::~ClapTrap() {
	std::cout << "Unity ClapTrap returned in the god embraces" << std::endl;
}

ClapTrap::ClapTrap &operator=(const ClapTrap &toCopy) {
	
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
		std::cout << target << " took a lot of damage : " << _AttackDamage << " and it cost 1 energy ! (" << _EnergyPoints << "/10)" << std::endl;
	}
	else
		std::cout << "No more power to attack !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_HitPoints - amount <= 0) {
		std::cout << "NAAAAAAAAAAAAAH I'M DYING ! CRUEL WORLLLLLD !" << std::endl;
		this->~ClapTrap();
	}
	else
	{
		_HitPoints = _HitPoints - amount;
		std::cout << "AAAAAAAAAAAAARRG I TOOK " << amount << " DAMAGE AND I DON'T KNOW WHY ! I still have " << _HitPoints << " left !" << std::endl;
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

