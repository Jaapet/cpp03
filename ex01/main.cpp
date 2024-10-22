/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:41:38 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 18:50:20 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavTrap1;
	ScavTrap scavTrap2(scavTrap1);
	ClapTrap clapTrap3(scavTrap2);

	scavTrap2 = ScavTrap("Foo");
	clapTrap3 = ScavTrap("Bar");

	while (clapTrap3.getHp())
	{
		scavTrap2.attack(clapTrap3.getName());
		clapTrap3.takeDamage(scavTrap2.getAd());
		clapTrap3.beRepaired(scavTrap2.getAd() / 4);
	}

	scavTrap2.guardGate();

	return 0;
}
