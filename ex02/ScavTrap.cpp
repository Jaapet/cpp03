/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:10:13 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 18:21:56 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	std::cout << "Scav default constructor." << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(ScavTrap const &instance):ClapTrap(instance)
{
	std::cout << "Scav copy constructor." << std::endl;
	*this = instance;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &instance)
{
	std::cout << "Assignment operator." << std::endl;
	ClapTrap::operator=(instance);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav destructor." << std::endl;
}

ScavTrap::ScavTrap(std::string const &name):ClapTrap(name)
{
	std::cout << "Scav name constructor." << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_ad = 20;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "Scav ";
	ClapTrap::attack(target);	
}

void	ScavTrap::guardGate() const
{
	std::cout << this->_name << " is now in dog mode." << std::endl;
}