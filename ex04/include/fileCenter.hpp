/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileCenter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:51:17 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/09 12:30:03 by hosokawa         ###   ########.fr       */
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
		fileCenter(std::string inFile);
		~fileCenter();
		void replaceString(std::string s1,std::string s2);
};
