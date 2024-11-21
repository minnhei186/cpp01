/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomCump.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:11:38 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/21 14:17:30 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zonbie.hpp"

void Zonbie::randomChump(std::string name)
{
	Zonbie zonbie;
	zonbie.name=name;
	zonbie.announce();
}
