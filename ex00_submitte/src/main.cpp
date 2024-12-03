/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:26:45 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/23 19:55:35 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>



int main(void)
{
	Zombie zombie;
	Zombie* newZombie_pt;


	newZombie_pt=zombie.newZombie("hosokawa");
	newZombie_pt->announce();
	delete newZombie_pt;

	zombie.randomChump("radom");
	
	return 0;
}
