/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:46:31 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/06 18:46:03 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern	slave;
	Bureaucrat 	mundo("MUNDO", 145);
	Bureaucrat 	irelia("Irelia", 1);
	Form	*pre = slave.makeForm("PresidentialPardonForm","PRESIDENT");
	Form	*lobo= slave.makeForm("RobotomyRequestForm","ROBO");
	Form	*shru= slave.makeForm("s","Shrubbery");
	
	std::cout << mundo << "says: NoW MuNdO aRe BuReAuCrAt"<< std::endl;
	std::cout << irelia << "says: Ao viecce!"<< std::endl;

	mundo.signForm(*pre);
	mundo.signForm(*lobo);
	mundo.signForm(*shru);
	std::cout << pre << std::endl;
	std::cout << lobo << std::endl;
	std::cout << shru << std::endl;

	mundo.executeForm(*pre);
	mundo.executeForm(*lobo);
	mundo.executeForm(*shru);

	irelia.signForm(*pre);
	irelia.signForm(*lobo);
	irelia.signForm(*shru);
	std::cout << pre << std::endl;
	std::cout << lobo << std::endl;
	std::cout << shru << std::endl;

	irelia.executeForm(*pre);
	irelia.executeForm(*lobo);
	irelia.executeForm(*shru);
	
	return (0);
}