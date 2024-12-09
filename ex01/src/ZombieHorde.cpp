/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:41:39 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/07 20:07:45 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N,std::string name)
{
	Zombie* zombie;
	int i;

	if(N<=0)
	{
		std::cout<<"Invalid number of zombies. more zombies!"<<std::endl;
		exit(EXIT_FAILURE);
	}

	zombie=new Zombie[N];
	if(zombie==NULL)
	{
		std::cout<<"malloc error"<<std::endl;
		exit(1);
	}
	i=0;
	while(i<N)
		zombie[i++].setName(name);
	return zombie;
}

