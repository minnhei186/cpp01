/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:11:16 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/30 13:56:24 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;

	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon& newWeapon);
		void attack(void);	

};
