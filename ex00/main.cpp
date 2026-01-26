#include "ClapTrap.hpp"

int		main()
{
	ClapTrap a("George");
	std::cout << "\n\n==================A new Challenger approach !====================" << std::endl;
	ClapTrap b("EvilGeorge");

	std::cout << "\n========= THE FIGHT BEGIN =========" << std::endl;
	std::cout << "George launch the first attack !" << std::endl;
	a.attack("EvilGeorge");
	b.takeDamage(0);

	std::cout << "\nTurn 2 ---------" << std::endl;
	std::cout << "George slipped on a soap :" << std::endl;
	a.takeDamage(5);
	std::cout << "George : I should repair myself !"<< std::endl;
	a.beRepaired(4);

	std::cout << "\nTurn 3 ---------" << std::endl;
	std::cout << "EvilGeorge have allergy ! He suffer from a fatal wound !" << std::endl;
	b.takeDamage(10);
	std::cout << "\n\n***************VICTORYYYYYYYYY*****************\n\nGeorge level up 1 !\n" << std::endl;
	return (0);
}
