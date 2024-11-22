/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:51 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/22 15:37:34 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	std::cout << "\033[34;1m--creating ScavTrap object no_name--\n\033[0m";
	FragTrap	no_name;
	
	std::cout << "\n" << "\033[33;1m--creating ScavTrap object bob--\n\033[0m";
	FragTrap	bob("bob");

	std::cout << "\n" << "\033[34;1m--calling no_name.attack(\"bob\");--\n\033[0m";
	no_name.attack("bob");
	
	std::cout << "\n" << "\033[34;1m--calling no_name.beRepaired(10);--\n\033[0m";
	no_name.beRepaired(10);

	std::cout << "\n" << "\033[33;1m--calling bob.highFivesGuys();--\n\033[0m";
	bob.highFivesGuys();

	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n" << "\033[33;1m--calling bob.takeDamage(50); " << i + 1 << " time\n\033[0m";
		bob.takeDamage(50);
	}

	std::cout << "\n" << "\033[35;1m--creating ScavTrap object terry (a copy of bob)--\n\033[0m";
	FragTrap	terry(bob);

	std::cout << "\n" << "\033[35;1m--calling terry.highFivesGuys();--\n\033[0m";
	terry.highFivesGuys();

	std::cout << "\n" << "\033[35;1m--creating ScavTrap object jane (a copy assignment of bob)--\n\033[0m";
	FragTrap	jane;
	jane = bob;

	std::cout << "\n" << "\033[35;1m--calling jane.highFivesGuys();--\n\033[0m";
	jane.highFivesGuys();

	std::cout << "\n" << "\033[31;1m--MAIN FINISHED--\n\033[0m";
	return (0);
}