/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:28:23 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/22 14:59:16 by gstronge         ###   ########.fr       */
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
		std::cout << "ClapTrap " << _name << " took " << amount << " points of hit damage!\n";
		_hit_points-=amount;
	}
	else
		std::cout << _name << " doesn't have enough energy or enough hit points to take more damage\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " repaired " << amount << " points of hit damage!\n";
		_hit_points+=amount;
		_energy_points--;
	}
	else
		std::cout << _name << " doesn't have enough energy or enough hit points to be repaired\n";
}

std::string	ClapTrap::getName() const
{
	return (_name);
}

int	ClapTrap::getHitPoints() const
{
	return (_hit_points);
}

int	ClapTrap::getEnergyPoints() const
{
	return (_energy_points);
}

int	ClapTrap::getAttackDamage() const
{
	return (_attack_damage);	
}

void	ClapTrap::setName(const std::string& set_name)
{
	_name = set_name;
}

void	ClapTrap::setHitPoints(int set_hit_points)
{
	_hit_points = set_hit_points;
}

void	ClapTrap::setEnergyPoints(int set_energy_points)
{
	_energy_points = set_energy_points;
}

void	ClapTrap::setAttackDamage(int set_attack_damage)
{
	_attack_damage = set_attack_damage;	
}
