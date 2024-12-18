/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:36:51 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/09 14:38:26 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}


void    Harl::debug( void ) {
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void    Harl::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
	int i;
	H_func funcs[]={&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
	std::string level_list[]={"DEBUG","INFO","WARNING","ERROR"};

	i=0;
	while(i<4)
	{
		if(level_list[i].compare(level)==0)
		{
			(this->*funcs[i])();
			return;
		}
		i++;
	}

	std::cout<< "Invalid level: ";
	std::cout<< level;
	std::cout<< ". Please enter a valid level: DEBUG, INFO, WARNING, or ERROR.";
	std::cout<< std::endl;


}



















