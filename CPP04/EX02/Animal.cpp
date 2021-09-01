/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:16:30 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 14:33:28 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal::Animal()
{
	std::cout << "An Animal was created [" << type << "]" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
	std::cout << "An Animal was created [" << type << "]" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	*this = cpy;
	std::cout << "An Animal has been copied [" << type << "]" << std::endl;
}

Animal::~Animal()
{
	std::cout << "An Animal was destroyed [" << type << "]" << std::endl;
}

Animal 	&Animal::operator=(const Animal &cpy)
{
	std::cout << "An Animal assignetion operation [" << type << "]" << std::endl;
	type = cpy.type;
	return *this;
}


std::string Animal::getType(void) const
{
	return type;
}