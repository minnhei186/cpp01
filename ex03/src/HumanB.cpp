/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:16:48 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/30 13:55:38 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB():name("gandii")
{}

HumanB::HumanB(std::string Newname):name(Newname)
{}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon=&newWeapon;
}
	


void HumanB::attack(void)
{
	std::cout<<name<<" attacks with their "<<weapon->getType()<<std::endl;
}

