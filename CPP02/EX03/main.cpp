/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:59:51 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/28 18:21:27 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

Fixed sign (Point p1, Point p2, Point p3)
	{

		return 	((p1.getX() - p3.getX()) * (p2.getY() - p3.getY())) - 
				((p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
	}

	
int main( void ) 
{
	Point a(3, 5);
	std::cout << "A[" << a.getX() << "," << a.getY() << "]"<<std::endl;
	Point b(10, 5);
	std::cout << "B[" << b.getX() << "," << b.getY() << "]"<<std::endl;
	Point c(7,13);
	std::cout << "C[" << c.getX() << "," << c.getY() << "]"<<std::endl;
	Point p(7,5);
	std::cout << "P[" << p.getX() << "," << p.getY() << "]"<<std::endl;

	if (bsp(a, b, c, p))
		std::cout << "Dentro" << std::endl;
	else
		std::cout << "Fuori" << std::endl;
	return 0; 
}