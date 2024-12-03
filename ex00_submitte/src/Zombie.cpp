/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:39:21 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/23 19:36:11 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
		std::cout<<this->name;

	std::cout<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
