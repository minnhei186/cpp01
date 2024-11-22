/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zonbie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:06:34 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/21 14:08:10 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zonbie.hpp"

Zonbie::~Zonbie()
{
	if(!this->name.empty())
		std::cout<<this->name<<" was deleated"<<std::endl;
}

void Zonbie::announce(void)
{	
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

