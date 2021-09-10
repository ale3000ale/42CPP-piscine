/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:15:34 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/11 01:40:18 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

#define MAX_VAL 50000

int main(void)
{
	std::cout <<  "Subject's tests" << std::endl;
	{	// Subject's tests
		Span	sp(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl << "Massive tests with random values & SIZE = " << MAX_VAL  << std::endl;
	{	// Massive tests
		Span	sp(MAX_VAL);
		srand(time(NULL));

		for (size_t i = 0; i < MAX_VAL; i++)
		{
			sp.addNumber(rand());
		}
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl; 
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl << "Range insertion tests from an int array"  << std::endl;
	{	// Range insertion tests
		Span	sp(10);
		int		tab[10] = {2147483647, -2147483648, 0, 999, -666, 1, 42, -21, 17, -9999};

		sp.addRange(tab, tab + 10);
		std::cout << sp << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl; 
		std::cout << "longest span: " << sp.longestSpan() << std::endl;

	}
	std::cout << C_YELLOW << std::endl << "Exception tests" << C_RESET << std::endl;
	{
		Span	sp(1);

		try
		{
			sp.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		sp.addNumber(42);
		try
		{
			sp.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			sp.addNumber(21);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}	
	}
	return (0);
}