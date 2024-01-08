/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:41:38 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 18:50:10 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamondTrap1;
	FragTrap fragTrap2(diamondTrap1);
	ScavTrap scavTrap3(diamondTrap1);
	ClapTrap clapTrap4(diamondTrap1);

	diamondTrap1 = DiamondTrap("Foo");
	clapTrap4 = DiamondTrap("Bar");

	while (clapTrap4.getHp())
	{
		diamondTrap1.attack(clapTrap4.getName());
		clapTrap4.takeDamage(diamondTrap1.getAd());
		clapTrap4.beRepaired(diamondTrap1.getAd() / 3);
	}

	diamondTrap1.guardGate();
	diamondTrap1.highFivesGuys();
	diamondTrap1.whoAmI();

	return 0;
}
