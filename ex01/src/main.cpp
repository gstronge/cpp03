/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:51 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/22 17:09:33 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main(void)
{
	std::cout << "\033[34;1m--creating ScavTrap object no_name--\n\033[0m";
	ScavTrap	no_name;
	
	std::cout << "\n" << "\033[33;1m--creating ScavTrap object bob--\n\033[0m";
	ScavTrap	bob("bob");

	std::cout << "\n" << "\033[34;1m--calling no_name.attack(\"bob\");--\n\033[0m";
	no_name.attack("bob");
	
	std::cout << "\n" << "\033[34;1m--calling no_name.beRepaired(10);--\n\033[0m";
	no_name.beRepaired(10);

	std::cout << "\n" << "\033[33;1m--calling bob.guardGate();--\n\033[0m";
	bob.guardGate();

	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n" << "\033[33;1m--calling bob.takeDamage(50); " << i + 1 << " time\n\033[0m";
		bob.takeDamage(50);
	}

	std::cout << "\n" << "\033[35;1m--creating ScavTrap object terry (a copy of bob)--\n\033[0m";
	ScavTrap	terry(bob);

	std::cout << "\n" << "\033[35;1m--calling terry.guardGate();--\n\033[0m";
	terry.guardGate();

	std::cout << "\n" << "\033[35;1m--creating ScavTrap object jane (a copy assignment of bob)--\n\033[0m";
	ScavTrap	jane;
	jane = bob;

	std::cout << "\n" << "\033[35;1m--calling jane.guardGate();--\n\033[0m";
	jane.guardGate();


	std::cout << "\n" << "\033[36;1m--creating ClapTrap object anne--\n\033[0m";
	ClapTrap	anne("anne");

	std::cout << "\n" << "\033[36;1m--calling anne.attack(\"bob\");--\n\033[0m";
	anne.attack("bob");
	
	std::cout << "\n" << "\033[36;1m--calling anne.beRepaired(10);--\n\033[0m";
	anne.beRepaired(10);
	
	std::cout << "\n" << "\033[31;1m--MAIN FINISHED--\n\033[0m";
	return (0);
}
