/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:16:39 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/12 18:40:10 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(void)
{
	std::string	myStr = "HI THIS IS BRAIN";
	std::string	*stringPTR = &myStr;
	std::string stringREF = myStr;
	std::cout << "MY:  " << &myStr << "\nPTR: " << stringPTR 
		<< "\nREF: " << &stringREF << std::endl;
	std::cout << "MY:  -|" << myStr << "|-\nPTR: -|" << *stringPTR 
		<< "|-\nREF: -|" << stringREF << "|-" << std::endl;	
}
