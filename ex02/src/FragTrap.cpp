/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:46:25 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/10 22:46:25 by gstronge         ###   ########.fr       */
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

void		FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " is high fiving some guys\n";
}
