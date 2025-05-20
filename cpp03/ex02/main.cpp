#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Hugo");
	ScavTrap	trapB("Tom");
	FragTrap	trapC("Paul");

	trapC.highFivesGuys();
	trapA.attack(trapB.get_name());
	
	trapB.guardGate();
	trapC.attack(trapA.get_name());
	trapB.takeDamage(20);
	trapA.attack(trapB.get_name());
	trapB.takeDamage(2);
	trapB.attack(trapC.get_name());
	trapC.takeDamage(7);
	trapC.attack(trapA.get_name());
	trapA.takeDamage(5);
	trapA.beRepaired(3);
	trapB.attack(trapA.get_name());
	trapA.takeDamage(2);
	trapC.attack(trapB.get_name());
	trapA.attack(trapB.get_name());
	trapB.takeDamage(2);
	trapB.attack(trapC.get_name());
	trapC.takeDamage(7);
	trapC.attack(trapA.get_name());
	trapA.takeDamage(5);
	trapA.beRepaired(3);
	trapB.attack(trapA.get_name());
	trapA.takeDamage(2);
	trapC.attack(trapB.get_name());
	trapC.beRepaired(5);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
		return (0);
}

