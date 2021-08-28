/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:50:41 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/22 16:07:46 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	kr;
	if (argc != 2)
	{
		std::cout << "you must use only one lever in argument" << std::endl;
		return 1;
	}
	std::string	level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (argv[1] == level[i])
		{
			while (i < 4)
				kr.complain(level[i++]);
		}
		else if (i == 3)
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
}