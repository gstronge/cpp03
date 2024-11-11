/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:18:28 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/10 12:18:28 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	SCAVTRAP_HPP
# define	SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& other_obj);
	~ScavTrap();

	ScavTrap& operator=(const ScavTrap& other_obj);
	void guardGate();
};

#endif