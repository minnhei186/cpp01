/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:40:51 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/23 12:53:52 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	std::string type;
	Weapon sord;

	type="sord";
	sord.setType(type);

	HumanA hosokawa("hosokawa",sord);
	HumanB bad_man("bad_man");
	hosokawa.attack();
	bad_man.attack();
	
	return 0;
}


	

