/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:41:07 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/07 20:01:00 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie():name("no info")
{}

Zombie::~Zombie()
{
	std::cout << this->name << " was deleted" << std::endl;
}

void Zombie::announce(void)
{
	std::cout<<this->name<< ": BraiiiiiiinnnzzzZ..."<<std::endl;

}

void Zombie::setName(std::string new_name)
{
	name=new_name;
}

