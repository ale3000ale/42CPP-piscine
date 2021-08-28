/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:04:10 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/19 16:48:43 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>

int main(void)
{
	std::string name;
	std::string	s1, s2;

	while(name == "")
	{
		std::cout << "Enter a Filename: ";
		std::cin >> name;
	}
	while(s1 == "")
	{
		std::cout << "Enter to find String: ";
		std::cin >> s1;
	}
	while(s2 == "")
	{
		std::cout << "Enter replace String: ";
		std::cin >> s2;
	}
	
	std::ifstream input(name);
	if (!input)
	{
		std::cout << "Error opening file '" << name << "'" << std::endl;
		return 1;
	}	

	std::ofstream output(name + ".replace");

	if (!output)
	{
		std::cout << "Error writing file '" << name << ".replace'" << std::endl;
		return 1;
	}

	std::string	line;
	while(std::getline(input, line))
	{
		while (line.find(s1) != std::string::npos)
			line.replace(line.find(s1), s1.length(), s2);
		output << line;
		if (!input.eof())
			output << std::endl;
	}
	
}