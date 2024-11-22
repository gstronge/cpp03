/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:17:57 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/22 16:19:24 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << name << "'s ScavTrap Overloaded constructor called\n";
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& other_obj) : ClapTrap(other_obj)
{
	std::cout << other_obj.getName() << "'s ScavTrap Copy constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << this->getName() << "'s ScavTrap Destructor called\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other_obj)
{
	std::cout << this->getName() << "'s ScavTrap Copy assignment operator called\n";
	if (this != &other_obj)
	{	
		this->setName(other_obj.getName());
		this->setHitPoints(other_obj.getHitPoints());
		this->setEnergyPoints(other_obj.getEnergyPoints());
		this->setAttackDamage(other_obj.getAttackDamage());
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!\n";
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << getName() << " doesn't have enough energy or enough hit points to attack " << target << "\n";
}

void	ScavTrap::guardGate()
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
		std::cout << getName() << " is now in Gate keeper mode!\n";
	else
		std::cout << getName() << " doesn't have enough energy or enough hit points to be in gate keeper mode\n";
}
