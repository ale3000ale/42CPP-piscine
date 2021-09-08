/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:12:07 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/09/08 22:20:53 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Class.hpp"

Base	*extract(void)
{
	std::srand(std::time(NULL));
	int	nb = rand() % 3;

	if (!nb)
	{
		std::cout << "A" << std::endl;
		return (new A);
	}
	else if (nb == 1)
	{
		std::cout << "B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "C" << std::endl;
		return (new C);
	}
}

void	pt_identification(Base *p)
{
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "It's A" << std::endl;
	else if (b)
		std::cout << "It's B" << std::endl;
	else if (c)
		std::cout << "It's C" << std::endl;
}

void	rf_identification(Base & p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "It's A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "It's B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "It's C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
}

int main(void)
{
	Base	*cls = extract();

	pt_identification(cls);
	rf_identification(*cls);
	delete cls;	
	return 0;
}