#include "FragTrap.hpp"

int		main()
{
	FragTrap	a("Tralalero");
	FragTrap	b("Nutella");

	std::cout << "\n\n=============A friendly sparing started=============\n\n" << std::endl;
	a.attack("Nutella");
	b.takeDamage(67);
	std::cout << "\n============== turn 2\n" << std::endl;
	b.beRepaired(42);
	b.highFivesGuys();
	std::cout << "The enemy target disapprove the high five !" << std::endl;
	std::cout << "\n============== turn 3\n" << std::endl;
	b.highFivesGuys();
	std::cout << "\n============== turn 4\n" << std::endl;
	a.attack("Nutella");
	b.takeDamage(104);
	std::cout << std::endl;
	return (0);
}
