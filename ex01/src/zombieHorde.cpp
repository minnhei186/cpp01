/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:18:34 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/21 15:53:49 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zonbie.hpp>

Zonbie* Zonbie::zombieHorde(int N,std::string name)
{
	int i;
	Zonbie *zonbie_list;

	zonbie_list=new Zonbie[N];

	i=0;
	while(i<N)
	{
		zonbie_list[i].name=name;
		i++;
	}
	return zonbie_list;
}
