/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:53:04 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 18:45:51 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
	int n = 4;
	Animal* animals[n];
	for(int i = 0;i<n;i++)
	{
		std::cout << i <<")";
		if (i%2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "|-----------|" << std::endl;
	for(int i = 0;i<n;i++)
	{
		std::cout << i <<")";
		delete animals[i];
	}
	std::cout << "|-----COPY------|" << std::endl;
	Dog tarallo;
	tarallo.setIdea(0,"AO!");
	tarallo.setIdea(1,"sniff ass");
	Dog pluto(tarallo);
	std::cout << "Tarallo thinks" << std::endl;
	tarallo.printIdeas();
	pluto.printIdeas();
	std::cout << " 0 copy 1" << std::endl;
}