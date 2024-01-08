/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:10:13 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 18:21:34 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	std::cout << "Frag default constructor." << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(FragTrap const &instance):ClapTrap(instance)
{
	std::cout << "Frag copy constructor." << std::endl;
	*this = instance;
}

FragTrap	&FragTrap::operator=(FragTrap const &instance)
{
	std::cout << "Assignment operator." << std::endl;
	ClapTrap::operator=(instance);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Frag destructor." << std::endl;
}

FragTrap::FragTrap(std::string const &name):ClapTrap(name)
{
	std::cout << "Frag name constructor." << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_ad = 30;
}

void	FragTrap::highFivesGuys() const
{
	std::cout << this->_name << " highfives." << std::endl;
}