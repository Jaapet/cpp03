/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:42:03 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 15:26:08 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("null"), _hp(10), _energy(10), _ad(0)
{
	std::cout << "Default constructor." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &instance)
{
	std::cout << "Copy constructor." << std::endl;
	*this = instance;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &instance)
{
	std::cout << "Assignment operator." << std::endl;
	this->_name = instance.getName();
	this->_hp = instance.getHp();
	this->_energy = instance.getEnergy();
	this->_ad = instance.getAd();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name):_name(name), _hp(10), _energy(10), _ad(0)
{
	std::cout << "Name constructor." << std::endl;
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

int			ClapTrap::getHp() const
{
	return (this->_hp);
}

int			ClapTrap::getEnergy() const
{
	return (this->_energy);
}

int			ClapTrap::getAd() const
{
	return (this->_ad);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hp > 0 && this->_energy > 0)
	{
		std::cout << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage." << std::endl;
		this->_energy--;
	}
	else if (this->_hp <= 0)
		std::cout << this->_name << " is dead." << std::endl;
	else
		std::cout << this->_name << " is tired." << std::endl;
	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " took " << amount << " points of damage." << std::endl;
	this->_hp -= amount;
	if (this->_hp + amount <= 0)
		std::cout << this->_name << " was already dead." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0)
	{
		std::cout << this->_name << " healed " << amount << " HP." << std::endl;
		this->_hp += amount;
	}
	else
		std::cout << this->_name << " is tired." << std::endl;
}
