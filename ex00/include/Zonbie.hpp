/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zonbie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:45:10 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/21 14:16:36 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Zonbie.h"

class Zonbie
{
	public:
		~Zonbie();
		void announce(void);
		Zonbie* newZonbie(std::string name);
		void randomChump(std::string name);

	private:
		std::string name;

};





