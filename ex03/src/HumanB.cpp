/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:16:48 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/07 21:38:15 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"


HumanB::HumanB(std::string Newname):name(Newname)
{
	weapon=NULL;
}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon=&newWeapon;
}
	


void HumanB::attack(void)
{
	if(weapon==NULL)
	{
		std::cout << name << " has no weapon to attack with!" << std::endl;
	}
	else
	{
		std::cout<<name<<" attacks with their "<<weapon->getType()<<std::endl;
	}
}

