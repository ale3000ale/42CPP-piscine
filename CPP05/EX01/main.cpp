/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:46:31 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/06 01:41:03 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

	Bureaucrat 	mundo("MUNDO", 90);
	Bureaucrat 	irelia("Irelia", 70);
	Form		simpleForm("just do it!", 80, 80);
	
	std::cout << mundo << "says: NoW MuNdO aRe BuReAuCrAt"<< std::endl;
	std::cout << irelia << "says: Ao viecce!"<< std::endl;
	std::cout << simpleForm << std::endl;
	try
	{
		mundo.signForm(simpleForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << simpleForm << std::endl;

	try
	{
		irelia.signForm(simpleForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << simpleForm << std::endl;
	
	return (0);
	
}