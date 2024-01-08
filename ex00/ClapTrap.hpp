/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:41:52 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 15:04:46 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hp;
	int			_energy;
	int			_ad;
public:
	ClapTrap();
	ClapTrap(ClapTrap const &instance);
	ClapTrap	&operator=(ClapTrap const &instance);
	~ClapTrap();

	ClapTrap(std::string const &name);

	std::string	getName() const;
	int			getHp() const;
	int			getEnergy() const;
	int			getAd() const;
	
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif