/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:57:03 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/09 14:46:07 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::string input;
	while (true)
	{
		std::cout << "level>>";
		if(!std::getline(std::cin,input))
		{
			std::cout<< "Input error or EOF detected.." << std::endl;
			input="exit";
		}	
		if(input.compare("exit")==0)
			break;
		harl.complain(input);
	}
	return (EXIT_SUCCESS);
}
