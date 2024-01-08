/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:41:38 by ndesprez          #+#    #+#             */
/*   Updated: 2024/01/08 15:30:52 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap1;
	ClapTrap clapTrap2("Foo");
	ClapTrap clapTrap3(clapTrap2);

	clapTrap3 = ClapTrap("Bar");

	clapTrap2.attack(clapTrap3.getName());
	clapTrap3.takeDamage(clapTrap2.getAd());
	clapTrap3.beRepaired(clapTrap2.getAd());

	return 0;
}
