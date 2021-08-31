/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:35:06 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 14:02:17 by amarcell         ###   ########.fr       */
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

void 	Dog::makeSound(void) const
{
	std::cout << "[" << type << "] says BARK!" << std::endl;
}