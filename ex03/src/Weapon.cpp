/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:41:49 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/23 11:57:41 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


const std::string& Weapon::getType(void)
{
	return this->type;
}

void Weapon::setType(const std::string& new_type)
{
	this->type=new_type;
}

