#include "ClapTrap.hpp"

int		main()
{
	ClapTrap George = ClapTrap("George");
	std::cout << "\n\n==================A new Challenger approach !====================" << std::endl;
	ClapTrap EvilGeorge = ClapTrap("EvilGeorge");
	std::cout << "\n========= THE FIGHT BEGIN =========" << std::endl;
	std::cout << "George launch the first attack !" << std::endl;
	George.attack("EvilGeorge");
	std::cout << "\nTurn 2 ---------" << std::endl;
	std::cout << "George took a huge blow :" << std::endl;
	George.takeDamage(5);
	std::cout << "George : I should repair myself !"<< std::endl;
	George.beRepaired(4);
	std::cout << "\nTurn 3 ---------" << std::endl;
	std::cout << "EvilGeorge have allergy ! He suffer from a fatal wound !" << std::endl;
	EvilGeorge.takeDamage(10);
	std::cout << "***************VICTORYYYYYYYYY*****************\n George level up 1 !" << std::endl;
	return (0);
}
