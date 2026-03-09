#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#define _CLEAR "\033[0m"		//reset color
#define _BLACK "\033[30m"		//set foreground color to black
#define _RED "\033[31m"			//set foreground color to red
#define _GREEN "\033[32m"		//set foreground color to green
#define _YELLOW "\033[33m"		//set foreground color to yellow
#define _BLUE "\033[34m"		//set foreground color to blue
#define _PURP "\033[35m"		//set foreground color to magenta (purple)
#define _CYAN "\033[36m"		//set foreground color to cyan
#define _WHITE "\033[37m"		//set foreground color to white

/*
\033[39m		set foreground color to default (white)
\033[40m		set background color to black
\033[41m		set background color to red
\033[42m		set background color to green
\033[43m		set background color to yellow
\033[44m		set background color to blue
\033[45m		set background color to magenta (purple)
\033[46m		set background color to cyan
\033[47m		set background color to white
\033[49m		set background color to default (black)
*/

class ClapTrap {
	private:
		std::string _Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &toCopy);
		~ClapTrap();

		ClapTrap &operator= (const ClapTrap &toCopy);

		std::string getName( void ) const;
		int getHitPoints( void ) const;
		int getEnergyPoints( void ) const;
		int getAttackPoints( void ) const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
