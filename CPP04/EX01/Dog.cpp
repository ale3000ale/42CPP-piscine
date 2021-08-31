/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:35:06 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 18:52:44 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	brain = new Brain();
	std::cout << "A Dog was created [" << type << "]" << std::endl;
}

Dog::Dog(Dog const &cpy)
{
	brain = NULL;
	std::cout << "the Dog was copied [" << type << "]" << std::endl;
	*this = cpy;
}

Dog &Dog::operator=(Dog const &cpy)
{
	std::cout << "Dog assigned operation[" << type << "]" << std::endl;
	if (this != &cpy)
	{
		if (brain)
			delete brain;
		brain = new Brain(*cpy.brain);
		type = cpy.type;
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "A Dog was destroyed [" << type << "]" << std::endl;
}

void 	Dog::makeSound(void) const
{
	std::cout << "[" << type << "] says BARK!" << std::endl;
}

void Dog::setIdea(const int i, const std::string tk)
{
	std::cout << "Dog[" << type << "] thinking" << std::endl;
	brain->setIdea(i, tk);
}

void Dog::printIdeas(void)
{
	std::cout << "Dog[" << type << "] explain" << std::endl;
	brain->printIdeas();
}