/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:46:25 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/22 15:31:25 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called\n";
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << name << "'s FragTrap Overloaded constructor called\n";
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& other_obj) : ClapTrap(other_obj)
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
	{	
		this->setName(other_obj.getName());
		this->setHitPoints(other_obj.getHitPoints());
		this->setEnergyPoints(other_obj.getEnergyPoints());
		this->setAttackDamage(other_obj.getAttackDamage());
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
		std::cout << this->getName() << " is high fiving some guys\n";
	else
		std::cout << getName() << " doesn't have enough energy or enough hit points to high five\n";
}
