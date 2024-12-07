/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:07:34 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/30 13:35:20 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	//Weapon club=Weapon("crude spiked club");

	//HumanA bob("bob",club);

	//bob.attack();
	
	Weapon club=Weapon("crude spiked club");
	HumanB jim("jim");

	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();


	return 0;
}
