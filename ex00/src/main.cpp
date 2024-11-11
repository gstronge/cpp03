/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:51 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/08 17:20:38 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	no_name;
	ClapTrap	bob("bob");

	no_name.attack("andy");
	bob.takeDamage(2);
	no_name.beRepaired(3);
}