/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:35:21 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/07 14:44:29 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string newName);
		~Zombie();
		void announce(void);
};

#endif

Zombie* newZombie(std::string name);
void randomChump(std::string name);

