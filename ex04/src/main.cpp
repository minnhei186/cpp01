/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <hosokawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:17:16 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/09 13:41:54 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include "fileCenter.hpp"

int main(void)
{

	std::string fileName;
	std::string target_s;
	std::string replace_s;

	std::cout<<"filename :";
	std::getline(std::cin,fileName);
	fileCenter iofile(fileName);

	std::cout<<"target_string :";
	std::getline(std::cin,target_s);
	std::cout<<"replace_string :";
	std::getline(std::cin,replace_s);

	iofile.replaceString(target_s,replace_s);

	return EXIT_SUCCESS;
}


