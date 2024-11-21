/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZonbie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:18:34 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/21 13:39:52 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zonbie.hpp>

Zonbie* Zonbie::newZonbie(std::string name)
{
	Zonbie *zonbie;

	zonbie=new Zonbie;
	zonbie->name=name;
	return zonbie;
}
