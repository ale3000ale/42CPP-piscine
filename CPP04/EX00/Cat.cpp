/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:45:19 by amarcell          #+#    #+#             */
/*   Updated: 2021/10/05 17:32:46 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "A Cat was created [" << type << "]" << std::endl;
}
Cat::~Cat()
{
	std::cout << "A Cat was destroyed [" << type << "]" << std::endl;
}
Cat::Cat(Cat &c) : Animal::Animal(c)
{
}

Cat &Cat::operator=(const Cat &cpy)
{
	Animal::operator=(cpy);
	return *this;
}

void 	Cat::makeSound(void) const
{
	std::cout << "[" << type << "] says MIHAO!" << std::endl;
}