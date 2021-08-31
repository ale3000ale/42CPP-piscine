/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:23:10 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 15:27:08 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "An WrongAnimal was created [" << type << "]" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type)
{
	std::cout << "An WrongAnimal was created [" << type << "]" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	*this = cpy;
	std::cout << "An WrongAnimal has been copied [" << type << "]" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "An WrongAnimal was destroyed [" << type << "]" << std::endl;
}

WrongAnimal 	&WrongAnimal::operator = (const WrongAnimal &cpy)
{
	type = cpy.type;
	return *this;
}

void 	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal [" << type << "] says ROAR!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return type;
}