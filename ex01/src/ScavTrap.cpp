/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:17:57 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/22 17:15:33 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 10;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << name << "'s ScavTrap Overloaded constructor called\n";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 10;
}

ScavTrap::ScavTrap(const ScavTrap& other_obj) : ClapTrap(other_obj)
{
	std::cout << other_obj._name << "'s ScavTrap Copy constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << "'s ScavTrap Destructor called\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other_obj)
{
	std::cout << this->_name << "'s ScavTrap Copy assignment operator called\n";
	if (this != &other_obj)
	{	
		this->_name = other_obj._name;
		this->_hit_points = other_obj._hit_points;
		this->_energy_points = other_obj._energy_points;
		this->_attack_damage = other_obj._attack_damage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!\n";
		_energy_points--;
	}
	else
		std::cout << _name << " doesn't have enough energy or enough hit points to attack " << target << "\n";
}

void	ScavTrap::guardGate()
{
	if (_energy_points > 0 && _hit_points > 0)
		std::cout << _name << " is now in gate keeper mode!\n";
	else
		std::cout << _name << " doesn't have enough energy or enough hit points to be in gate keeper mode\n";
}
