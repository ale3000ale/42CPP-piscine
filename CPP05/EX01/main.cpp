/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:46:31 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/04 16:07:41 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)Ç
{
	Bureaucrat mundo("MUNDO", HIGHEST_GRADE);
	Bureaucrat irelia("Irelia", LOWEST_GRADE);
	
	std::cout << mundo << "says: NoW MuNdO aRe BuReAuCrAt"<< std::endl;
	std::cout << irelia << "says: Ao viecce!"<< std::endl;
	try
	{
		mundo.gradeAdd();
	}
	catch(const std::exception& e)
	{
		std::cerr << mundo << "  "<< e.what() << '\n';
	}

	try
	{
		irelia.gradeSub();
	}
	catch(const std::exception& e)
	{
		std::cerr << irelia << "  "<< e.what() << '\n';
	}

	std::cout << mundo << std::endl;
	std::cout << irelia << std::endl;
	
	return (0);
	
}