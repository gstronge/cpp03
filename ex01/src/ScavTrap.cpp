/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:17:57 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/10 12:17:57 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(10);
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << name << "'s ScavTrap Overloaded constructor called\n";
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(10);
}

ScavTrap::ScavTrap(const ScavTrap& other_obj) : ClapTrap(other_obj)
{
	std::cout << other_obj.getName() << "'s ScavTrap Copy constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << this->getName() << "'s ScavTrap Destructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other_obj)
{
	std::cout << this->getName() << "'s ScavTrap Copy assignment operator called\n";
	if (this != &other_obj)
		ClapTrap::operator=(other_obj);
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << getName() << " ScavTrap is now in Gate keeper mode!\n";
}
