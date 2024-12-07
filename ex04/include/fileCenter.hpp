/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileCenter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:51:17 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/02 15:23:12 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

class fileCenter
{
	private:
		std::ifstream inFile;
		std::ofstream outFile;
	public:
		fileCenter();
		fileCenter(std::string inFile);
		//fileCenter(std::string inFile,std::string outFile);
		~fileCenter();
		//void setInFile(std::ifstream newInFile);
		//void setOutFile(std::ofstream outInFile);
		void replaceString(std::string s1,std::string s2);
};
