/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:39:21 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/07 19:45:26 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string newName)
{
	name = newName;
}

Zombie::~Zombie()
{
	std::cout << this->name << " was deleted" << std::endl;
}

void Zombie::announce(void)
{
	std::cout <<name<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}
