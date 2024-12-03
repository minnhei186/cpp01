/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humana.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   created: 2024/11/23 11:33:03 by hosokawa          #+#    #+#             */
/*   updated: 2024/11/23 11:48:22 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(const std::string& name,Weapon& weapon):
	name(name),
	weapon(weapon)
{}


void HumanA::attack(void)
{
	std::cout<<this->name<<" attacks with their "<<this->weapon.getType()<<std::endl;
}
