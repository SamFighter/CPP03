#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
	private :
		bool	_askedHighFive;
	public :
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		FragTrap &operator=(const FragTrap &toCopy);

		void	highFivesGuys(void);
};

#endif
