/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:37:54 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/23 19:50:16 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *zombie;

	zombie=new Zombie;
	if(zombie==NULL)
	{
		std::cout<<"malloc error"<<std::endl;
		exit(1);
	}
	zombie->name=name;

	return zombie;
}
