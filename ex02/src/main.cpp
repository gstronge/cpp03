/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:51 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/10 23:04:03 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	FragTrap	no_name;
	FragTrap	bob("bob");

	no_name.attack("andy");
	bob.takeDamage(2);
	no_name.beRepaired(3);
	bob.guardGate();
	
	for (int i = 0; i < 6; i++)
		bob.takeDamage(20);

	bob.highFivesGuys();
}