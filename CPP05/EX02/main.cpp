/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:46:31 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/06 01:55:49 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{

	Bureaucrat 	mundo("MUNDO", 145);
	Bureaucrat 	irelia("Irelia", 1);
	PresidentialPardonForm	pre("PRESIDENT");
	RobotomyRequestForm		lobo("ROBO");
	ShrubberyCreationForm	shru("Shrubbery");
	
	std::cout << mundo << "says: NoW MuNdO aRe BuReAuCrAt"<< std::endl;
	std::cout << irelia << "says: Ao viecce!"<< std::endl;
	try
	{
		mundo.signForm(pre);
		mundo.signForm(lobo);
		mundo.signForm(shru);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << pre << std::endl;
	std::cout << lobo << std::endl;
	std::cout << shru << std::endl;

	try
	{
		lobo.execute(mundo);
		shru.execute(mundo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		irelia.signForm(pre);
		irelia.signForm(lobo);
		irelia.signForm(shru);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << pre << std::endl;
	std::cout << lobo << std::endl;
	std::cout << shru << std::endl;

	try
	{
		pre.execute(irelia);
		lobo.execute(irelia);
		shru.execute(irelia);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
	
}