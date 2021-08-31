/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:45:19 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 14:02:02 by amarcell         ###   ########.fr       */
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

void 	Cat::makeSound(void) const
{
	std::cout << "[" << type << "] says MIHAO!" << std::endl;
}