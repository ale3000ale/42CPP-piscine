/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:35:06 by amarcell          #+#    #+#             */
/*   Updated: 2021/10/05 17:38:47 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "A Dog was created [" << type << "]" << std::endl;
}

Dog::~Dog()
{
	std::cout << "A Dog was destroyed [" << type << "]" << std::endl;
}

Dog::Dog(Dog &c) : Animal::Animal(c)
{
}

Dog &Dog::operator=(const Dog &cpy)
{
	Animal::operator=(cpy);
	return *this;
}

void 	Dog::makeSound(void) const
{
	std::cout << "[" << type << "] says BARK!" << std::endl;
}