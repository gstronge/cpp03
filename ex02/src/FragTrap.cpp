/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:46:25 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/12 12:00:46 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ScavTrap()
{
	std::cout << "FragTrap Default constructor called\n";
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const std::string name) : ScavTrap(name)
{
	std::cout << name << "'s FragTrap Overloaded constructor called\n";
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& other_obj) : ScavTrap(other_obj)
{
	std::cout << other_obj.getName() << "'s FragTrap Copy constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << this->getName() << "'s FragTrap Destructor called\n";
}

FragTrap&	FragTrap::operator=(const FragTrap& other_obj)
{
	std::cout << this->getName() << "'s FragTrap Copy assignment operator called\n";
	if (this != &other_obj)
		ScavTrap::operator=(other_obj);
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!\n";
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << getName() << " doesn't have enough energy or enough hit points to attack " << target << "\n";
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "FragTrap " << getName() << " took " << amount << " points of hit damage!\n";
		setHitPoints(getHitPoints() - amount);
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << getName() << " doesn't have enough energy or enough hit points to take more damage\n";
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "FragTrap " << getName() << " repaired " << amount << " points of hit damage!\n";
		setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << getName() << " doesn't have enough energy or enough hit points to be repaired\n";
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " is high fiving some guys\n";
}
