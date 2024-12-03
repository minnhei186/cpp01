/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:45:14 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/29 12:33:18 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
	Zombie* zombie;
	std::string name;
	int n;
	int i;

	std::cout<<"sir! Dr.??  what is zombie name ?\n";
	std::cout<<">>";
	std::cin>>name;

	std::cout<<"sir! Dr.??  haw many zombie do you want to make ?n";
	std::cout<<">>";
	std::cin>>n;

	zombie=zombieHorde(n,name);
	i=0;
	while(i<n)
		zombie[i++].announce();
	delete[] zombie;

	return (EXIT_SUCCESS);

}
