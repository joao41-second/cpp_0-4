#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Hugo Boss");
	ClapTrap	trapB("John Dirty");
	ScavTrap	scrv("jota");

	scrv.attack(trapA.get_name());
	trapA.takeDamage(2);
	trapA.status();
	trapA.attack(scrv.get_name());
	scrv.takeDamage(2);	
	scrv.attack(trapA.get_name());
	scrv.status();
	scrv.guardGate();

	scrv.status();
	return (0);
}

