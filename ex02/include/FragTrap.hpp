/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:40:31 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/22 16:03:59 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	FRAGTRAP_HPP
# define	FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap& other_obj);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& other_obj);
	void		highFivesGuys(void);
};

#endif
