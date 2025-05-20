#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Hugo Boss");
	ClapTrap	trapB("John Dirty");


	trapA.attack(trapB.get_name());
	trapB.takeDamage(2);
	trapB.attack(trapA.get_name());
	trapA.takeDamage(5);
	trapB.attack(trapA.get_name());
	trapA.takeDamage(2);

	trapA.attack(trapB.get_name());
	trapB.takeDamage(2);
	trapB.attack(trapA.get_name());

	trapA.takeDamage(5);
	trapA.attack(trapB.get_name());
	trapA.beRepaired(1);
	
	trapB.attack(trapA.get_name());
	trapA.takeDamage(2);

	trapB.attack(trapA.get_name());
	trapA.takeDamage(2);

	trapB.attack(trapA.get_name());
	trapA.takeDamage(2);
	
	trapB.attack(trapA.get_name());
	trapA.takeDamage(2);

	trapB.attack(trapA.get_name());
	trapA.takeDamage(2);
	
	trapB.beRepaired(3);
	trapB.beRepaired(3);
	trapB.beRepaired(3);
	trapA.beRepaired(3);
	return (0);
}

