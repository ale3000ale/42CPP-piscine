/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:20:32 by amarcell          #+#    #+#             */
/*   Updated: 2021/10/19 15:10:44 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> a(3);
	try
	{
		a.setArray(0, 3);
		a.setArray(1, 2);
		a.setArray(20, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	a.setArray(2, 1);
	
	std::cout << "A:" << a << std::endl;
	Array<int> b(a);
	std::cout << "B:" << b << std::endl;

	try
	{
		b[1] = 100;
		b[-42] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "A:" << a << std::endl;
	std::cout << "B:" << b << std::endl;
	return(0);
}