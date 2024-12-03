/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:57:03 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/03 13:04:22 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::string input;
	input = "init";
	while (input.compare("exit") != 0)
	{
		std::cout << "level>>";
		std::cin >> input;
		harl.complain(input);
	}
	return (EXIT_SUCCESS);
}
