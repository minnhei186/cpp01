/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:46:59 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/22 16:06:28 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str;
	std::string* stringPTR;
	std::string& stringREF=str;

	
	str="HI THIS IS BRAIN";
	stringPTR=&str;
	
	std::cout<<str<<std::endl;
	std::cout<<stringPTR<<std::endl;
	std::cout<<stringREF<<std::endl;
	return 0;

}
