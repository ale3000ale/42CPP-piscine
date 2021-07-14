/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 02:10:06 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/07/14 03:11:11 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bookphone.hpp"

int	main()
{
	std::string	cmd;
	StepPhoneBook book;
	
	std::cout << "\e[1;1H\e[2J";
	std::cout << "-> ";
	std::getline(std::cin, cmd);
	while(cmd != EXIT)
	{
		if (cmd == ADD)
		{
			if (book.is_full())
				std::cout << "The Step Phone Book is full" << std::endl;
			else
				book.add();
		}
		if (cmd == SEARCH)
			book.find();
		
		std::cout << "-> ";
		std::getline(std::cin, cmd);
		std::cout << "\e[1;1H\e[2J";
	}
}