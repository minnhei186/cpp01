/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:45:39 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/23 12:49:53 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string&  name):
	name(name)
{}

void HumanB::attack(void)
{
	std::cout<<this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;
}

