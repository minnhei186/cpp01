/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:56:39 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/30 11:25:02 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():type("no info")
{}

Weapon::Weapon(std::string newType):type(newType)
{}
				   

Weapon::~Weapon()
{}



const std::string& Weapon::getType(void)
{
	return type;
}

void Weapon::setType(std::string new_type)
{
	type=new_type;
}

void Weapon::memberAnnounce(void)
{
	std::cout<<type<<std::endl;
	std::cout<<&type<<std::endl;
}

