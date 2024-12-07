/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:39:49 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/29 12:48:34 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{

	std::string str="HI THIS IS BRAIN";
	std::string& stringREF=str;
	std::string* stringPTR=&str;


	std::cout<<&str<<std::endl;
	std::cout<<&stringPTR<<std::endl;
	std::cout<<&stringREF<<std::endl;

	std::cout<<str<<std::endl;
	std::cout<<stringPTR<<std::endl;
	std::cout<<stringREF<<std::endl;

	return (EXIT_SUCCESS);
}


