#ifndef ScavTrap_hpp
#define ScavTrap_hpp

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private :
		bool	_GateMode;
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &toCopy);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &toCopy);

		void attack(const std::string& target);
		void guardGate();
};

#endif
