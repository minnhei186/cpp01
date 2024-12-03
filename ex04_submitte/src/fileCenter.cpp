/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileCenter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:09:13 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/03 11:20:15 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileCenter.hpp"

fileCenter::fileCenter()
{}

fileCenter::fileCenter(std::string newInFile)
{
	std::string reStr;

	reStr=newInFile+".replace";

	inFile.open(newInFile);
        if (!inFile.is_open()) 
            throw std::ios_base::failure("Failed to open input file");

	outFile.open(reStr);
	if (!outFile.is_open()) 
            throw std::ios_base::failure("Failed to open output file");
}

fileCenter::~fileCenter()
{
	inFile.close();
	outFile.close();

}


void fileCenter::replaceString(std::string from_s1,std::string to_s2)
{
	(void)from_s1;
	(void)to_s2;
	std::string content;

	if (!inFile.is_open()) 
            throw std::ios_base::failure("Failed to open input file");
	if (!outFile.is_open()) 
            throw std::ios_base::failure("Failed to open output file");

	std::getline(inFile,content,'\0');

	size_t pos=content.find(from_s1);
	while(pos!=std::string::npos)
	{
		content.erase(pos,from_s1.length());
		content.insert(pos,to_s2);
		pos=content.find(from_s1);
	}

	outFile<<content;	
}






