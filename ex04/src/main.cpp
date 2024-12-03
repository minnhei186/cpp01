/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:17:16 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/30 19:14:01 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>



int main(void)
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string in_file;
	std::string out_file;
	std::string str;
	std::string s1;
	std::string s2;

	std::cin>>in_file;
	out_file=in_file+".replace";

	ifs.open(in_file);
	if(ifs.fail())
		std::cout<<"Failed to open filen ifs"<<std::endl;
	std::getline(ifs,str);
	std::cout<<str<<std::endl;
	ifs.close();

	std::cout<<"what is string do you replace ?"<<std::endl;
	std::cout<<"from >>";
	std::cin>>s1;
	std::cout<<std::endl;

	std::cout<<"to >>";
	std::cin>>s2;
	std::cout<<std::endl;

	size_t pos=str.find(s1);
	while(pos!=std::string::npos)
	{
		str.erase(pos,s1.length());
		str.insert(pos,s2);
		pos=str.find(s1);
	}
	ofs<<str;
	ofs.close();

	return EXIT_SUCCESS;

}
	
	//s1が置き換え対象の文字列である。
	








//int	main(void)
//{
//	std::ifstream ifs;
//	std::ofstream ofs;
//	std::string filename;
//	std::string s1;
//	// std::string s2;
//	
//	std::cin >> filename;
//
//	ifs.open(filename);
//	if (ifs.fail())
//		std::cout << "Failed to open file ifs" << std::endl;
//	std::getline(ifs,s1);
//	std::cout<<s1<<std::endl;
//	ifs.close();
//
//	ofs.open(filename);
//	if(ofs.fail())
//		std::cout << "Failed to open file as ofs" << std::endl;
//	std::string str;
//	ofs<<str;
//	ofs.close();
//
//
//	
//	//std::getline(ifs, s1);
//	//std::cout << s1 << std::endl;
//
//	return (EXIT_SUCCESS);
//}
