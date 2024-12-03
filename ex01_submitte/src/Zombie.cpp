/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:41:07 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/29 12:31:43 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie():name("no info")
{}

Zombie::~Zombie()
{
	if(!this->name.empty())
		std::cout<<this->name<<" was deleated"<<std::endl;
}

void Zombie::announce(void)
{
	if(this->name.empty())
		std::cout<<"no info";
	else
		std::cout<<this->name<<std::endl;

}

void Zombie::setName(std::string new_name)
{
	name=new_name;
}

