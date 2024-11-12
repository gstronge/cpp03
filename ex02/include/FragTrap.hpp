/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:40:31 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/12 11:56:27 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	FRAGTRAP_HPP
# define	FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ScavTrap
{
public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap& other_obj);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& other_obj);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		highFivesGuys(void);
};

#endif
