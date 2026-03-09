#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap the og fragger is here !" << std::endl;
	this->_Name = "OGFragos";
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	this->_askedHighFive = false;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "DaAAaaaMmmnn Son, look at this beautiful oil box with legs ! He just arrived in town !" << std::endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	this->_askedHighFive = false;
	return ;
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy) {
  std::cout << "[copy constructor fragtrap called]" << std::endl;
  *this = toCopy;
}

FragTrap::~FragTrap() {
	std::cout << "DAAAAAMN HE JUST TAKE A 360 AND GET BACK TO LOBBY" << std::endl;
	return;
}

FragTrap& FragTrap::operator=(const FragTrap& toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_Name = toCopy._Name;
	this->_HitPoints = toCopy._HitPoints;
	this->_EnergyPoints = toCopy._EnergyPoints;
	this->_AttackDamage = toCopy._AttackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void) {
  if (this->_askedHighFive == 0) {
	  this->_askedHighFive = 1;
      std::cout << this->_Name << " : Is proposing a warm and strong high five only for the gameeeeeeeerz!" << std::endl;
	  return;
  }
  else {
	  this->_askedHighFive = 0;
	  std::cout << this->_Name << " : sadly lay down in recovery position (PLS) cause no one high fived..." << std::endl;
	  return;
  }
}
