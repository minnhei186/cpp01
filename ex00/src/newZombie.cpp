/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:37:54 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/07 14:39:54 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *zombie;

	zombie=new Zombie(name);
	if(zombie==NULL)
	{
		std::cout<<"malloc error"<<std::endl;
		exit(1);
	}

	return zombie;
}
