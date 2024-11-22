/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:46:25 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/22 17:17:24 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called\n";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << name << "'s FragTrap Overloaded constructor called\n";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other_obj) : ClapTrap(other_obj)
{
	std::cout << other_obj._name << "'s FragTrap Copy constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << _name << "'s FragTrap Destructor called\n";
}

FragTrap&	FragTrap::operator=(const FragTrap& other_obj)
{
	std::cout << this->_name << "'s FragTrap Copy assignment operator called\n";
	if (this != &other_obj)
	{	
		this->_name = other_obj._name;
		this->_hit_points = other_obj._hit_points;
		this->_energy_points = other_obj._energy_points;
		this->_attack_damage = other_obj._attack_damage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (_energy_points > 0 && _hit_points > 0)
		std::cout << _name << " is high fiving some guys\n";
	else
		std::cout << _name << " doesn't have enough energy or enough hit points to high five\n";
}
