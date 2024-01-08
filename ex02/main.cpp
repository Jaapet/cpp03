/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:41:38 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 17:24:32 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragTrap1;
	FragTrap fragTrap2(fragTrap1);
	ScavTrap scavTrap3;
	ClapTrap clapTrap4(scavTrap3);

	fragTrap2 = FragTrap("Foo");
	clapTrap4 = FragTrap("Bar");

	fragTrap2.attack(clapTrap4.getName());
	clapTrap4.takeDamage(fragTrap2.getAd());
	clapTrap4.beRepaired(fragTrap2.getAd() / 3);

	fragTrap2.highFivesGuys();

	return 0;
}
