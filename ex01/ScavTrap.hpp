/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:10:04 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 16:21:50 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(ScavTrap const &instance);
	ScavTrap	&operator=(ScavTrap const &instance);
	~ScavTrap();

	ScavTrap(std::string const &name);

	void	attack(const std::string &target);
	void	guardGate() const;
};

#endif