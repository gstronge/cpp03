/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:17:57 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/12 12:02:30 by gstronge         ###   ########.fr       */
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

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " took " << amount << " points of hit damage!\n";
		setHitPoints(getHitPoints() - amount);
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << getName() << " doesn't have enough energy or enough hit points to take more damage\n";
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " repaired " << amount << " points of hit damage!\n";
		setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << getName() << " doesn't have enough energy or enough hit points to be repaired\n";
}

void	ScavTrap::guardGate()
{
	std::cout << getName() << " is now in Gate keeper mode!\n";
}
