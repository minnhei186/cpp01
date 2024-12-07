/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:26:45 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/07 14:45:56 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>



int main(void)
{
	Zombie* newZombie_pt;

	newZombie_pt=newZombie("hosokawa");
	newZombie_pt->announce();
	randomChump("hohoho");

	delete newZombie_pt;
	
	return 0;
}
