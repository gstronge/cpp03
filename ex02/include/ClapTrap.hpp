/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:29:21 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/11 21:01:14 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	CLAPTRAP_H
# define	CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other_obj);
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap& other_obj);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
	int			getAttackDamage() const;
	void		setName(const std::string& set_name);
	void		setHitPoints(int set_hit_points);
	void		setEnergyPoints(int set_energy_points);
	void		setAttackDamage(int set_attack_damage);
};

#endif