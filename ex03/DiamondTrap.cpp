/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:10:13 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 18:37:01 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(),_name("null")
{
	std::cout << "Diamond default constructor." << std::endl;
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_ad = FragTrap::_ad;
}

DiamondTrap::DiamondTrap(DiamondTrap const &instance):ClapTrap(instance),ScavTrap(instance),FragTrap(instance)
{
	std::cout << "Diamond copy constructor." << std::endl;
	*this = instance;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &instance)
{
	std::cout << "Assignment operator." << std::endl;
	ClapTrap::operator=(instance);
	this->_name = instance._name;

	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name):ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "Diamond name constructor." << std::endl;
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_ad = FragTrap::_ad;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap name : " << this->_name << std::endl;
	std::cout << "ClapTrap name    : " << ClapTrap::_name << std::endl;
}
