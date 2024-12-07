/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:52:36 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/30 11:24:25 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string newType);
		~Weapon();
		const std::string& getType(void);
		void  setType(std::string type);
		void  memberAnnounce(void);

};


