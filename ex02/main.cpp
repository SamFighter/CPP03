#include "ScavTrap.hpp"

int		main()
{
	ScavTrap	a("Francois Gabart");
	ScavTrap	b("Josephine guardianAngel");

	std::cout << "\n\nA new challenger appeared !\n\n" << std::endl;
	a.attack("Josephine guardianAngel");
	b.takeDamage(67);
	std::cout << "\n============== turn 2\n" << std::endl;
	b.beRepaired(42);
	b.guardGate();
	std::cout << "\n============== turn 3\n" << std::endl;
	b.guardGate();
	std::cout << "\n============== turn 4\n" << std::endl;
	b.attack("Francois Gabart");
	a.takeDamage(104);
	b.attack("Francois Gabart");
	a.takeDamage(69);
	a.beRepaired(71);
	std::cout << "\n\n" << std::endl;
	for (int i = 0; i < 48; i++)
		b.attack("Francois Gabart body");
	std::cout << std::endl;
	a.attack("Josephine guardianAngel");
	std::cout << std::endl;
	return (0);
}
