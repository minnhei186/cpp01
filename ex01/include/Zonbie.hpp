/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zonbie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:45:10 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/21 15:39:52 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Zonbie.h"

class Zonbie
{
	public:
		~Zonbie();
		void announce(void);
		Zonbie* zombieHorde(int N,std::string name);

	private:
		std::string name;

};





