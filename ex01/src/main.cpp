/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:51 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/12 11:52:01 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main(void)
{
	ScavTrap	no_name;
	ScavTrap	bob("bob");

	no_name.attack("andy");
	bob.takeDamage(2);
	no_name.beRepaired(3);
	bob.guardGate();
	
	for (int i = 0; i < 6; i++)
		bob.takeDamage(20);
}