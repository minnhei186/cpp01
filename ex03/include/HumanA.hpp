/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 11:15:02 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/07 21:24:55 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string name;
		Weapon& weapon;
	public:
		HumanA(std::string newName,Weapon& newWeapon);
		~HumanA();
		void attack(void);
};
