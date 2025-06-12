#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Hugo");
	ScavTrap	trapB("Tom");
	FragTrap	trapC("Paul");
	DiamondTrap	trapD("Diamond");

	trapB.status();
	trapC.status();
	trapD.status();
	trapD.attack("everyone!");
	trapD.whoAmI();
	trapD.highFivesGuys();
	trapD.guardGate();
	trapD.status();
	trapC.highFivesGuys();
	trapD.attack(trapC.get_name());
	
	trapD.guardGate();
	trapD.attack(trapC.get_name());
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
	trapB.beRepaired(3);
	trapD.beRepaired(6);
	return (0);
}
