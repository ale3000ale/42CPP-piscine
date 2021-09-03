/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:46:31 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/03 19:06:29 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat mundo("MUNDO", HIGHEST_GRADE);
	Bureaucrat irelia("Irelia", LOWEST_GRADE);
	
	std::cout << mundo << "says: NoW MuNdO aRe BuReAuCrAt"<< std::endl;
	std::cout << mundo << "says: Ao viecce!"<< std::endl;
	try
	{
		mundo.gradeSub();
	}
	catch(const std::exception& e)
	{
		std::cerr << mundo << "  "<< e.what() << '\n';
		return (1);
	}

	try
	{
		for(int i = 0; i < 0 ; i++)
			irelia.gradeSub();
	}
	catch(const std::exception& e)
	{
		std::cerr << mundo << "  "<< e.what() << '\n';
		return (1);
	}
	
	return (0);
	
}