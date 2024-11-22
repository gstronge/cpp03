/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:51 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/21 14:49:05 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main(void)
{
	std::cout << "\033[33;1m--creating ClapTrap object no_name--\n\033[0m";
	ClapTrap	no_name;
	
	std::cout << "\n" << "\033[34;1m--creating ClapTrap object bob--\n\033[0m";
	ClapTrap	bob("bob");

	std::cout << "\n" << "\033[34;1m--calling bob.takeDamage(2);--\n\033[0m";
	bob.takeDamage(2);
	
	std::cout << "\n" << "\033[34;1m--calling no_name.beRepaired(3);--\n\033[0m";
	bob.beRepaired(3);

	for (int i = 0; i < 11; i++)
	{
		std::cout << "\n" << "\033[33;1m--calling no_name.attack(\"bob\"); " << i + 1 << " time\n\033[0m";
		no_name.attack("bob");
	}

	std::cout << "\n" << "\033[31;1m--MAIN FINISHED--\n\033[0m";
	return (0);
}