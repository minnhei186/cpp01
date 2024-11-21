/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:34:24 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/21 14:16:06 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zonbie.h"

int main(void)
{
	Zonbie zonbie;
	Zonbie *new_zonbie;

	new_zonbie=zonbie.newZonbie("david");
	new_zonbie->announce();
	
	zonbie.randomChump("random");

	delete new_zonbie;
	return 0;
}


