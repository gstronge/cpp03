/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:28:23 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/22 17:07:21 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("No name"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hit_points(10), 
	_energy_points(10), _attack_damage(0)
{
	std::cout << _name << "'s ClapTrap Overloaded constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other_obj) : _name(other_obj._name), 
	_hit_points(other_obj._hit_points), _energy_points(other_obj._energy_points), 
	_attack_damage(other_obj._attack_damage)
{
	std::cout << this->_name << "'s ClapTrap Copy constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << "'s ClapTrap Destructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other_obj)
{
	std::cout << this->_name << "'s ClapTrap Copy assignment operator called\n";
	if (this != &other_obj)
	{
		this->_name = other_obj._name;
		this->_hit_points = other_obj._hit_points;
		this->_energy_points = other_obj._energy_points;
		this->_attack_damage = other_obj._attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!\n";
		_energy_points--;
	}
	else
		std::cout << _name << " doesn't have enough energy or enough hit points to attack " << target << "\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << _name << " took " << amount << " points of hit damage!\n";
		_hit_points-=amount;
	}
	else
		std::cout << _name << " doesn't have enough energy or enough hit points to take more damage\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << _name << " repaired " << amount << " points of hit damage!\n";
		_hit_points+=amount;
		_energy_points--;
	}
	else
		std::cout << _name << " doesn't have enough energy or enough hit points to be repaired\n";
}
