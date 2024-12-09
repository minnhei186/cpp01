/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 11:26:41 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/07 21:29:09 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"



HumanA::HumanA(std::string newName,Weapon& newWeapon):
	name(newName),
	weapon(newWeapon)
{}

HumanA::~HumanA()
{}

void HumanA::attack(void)
{
	std::cout<<name<<" attacks with their "<<weapon.getType()<<std::endl;
}

