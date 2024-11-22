/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:34:24 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/21 16:01:47 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zonbie.h"

int main(void)
{
	Zonbie zonbie;
	Zonbie *zonbie_list;

	zonbie_list=zonbie.zombieHorde(10,"takeshi");
	zonbie_list->announce();
	

	delete[] zonbie_list;
	return 0;
}


