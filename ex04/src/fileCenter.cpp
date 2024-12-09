/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileCenter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:09:13 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/09 13:41:13 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileCenter.hpp"

fileCenter::fileCenter(std::string newInFile)
{
	std::string reStr;

	reStr=newInFile+".replace";

	inFile.open(newInFile);
        if (!inFile.is_open()) 
	{
		std::cout<<"Failed to open input file"<<std::endl;
		exit (EXIT_FAILURE);
	}

	if(inFile.peek()==EOF)
	{
		std::cout<<"Error: Input file is empty"<<std::endl;
		exit(EXIT_FAILURE);
	}

	outFile.open(reStr);
	if (!outFile.is_open()) 
	{
		std::cout<<"Failed to open output file"<<std::endl;
		exit (EXIT_FAILURE);
	}
}

fileCenter::~fileCenter()
{
	inFile.close();
	outFile.close();

}


void fileCenter::replaceString(std::string from_s1,std::string to_s2)
{
	std::string content;
	size_t pos;

	if(from_s1.empty())
	{
		std::cout<<"Invalid empty string in target_string"<<std::endl;
		return ;
	}

	std::getline(inFile,content,'\0');
	pos=content.find(from_s1);
	while(pos!=std::string::npos)
	{
		content.erase(pos,from_s1.length());
		content.insert(pos,to_s2);
		pos=content.find(from_s1);
	}

	outFile<<content;	
}






