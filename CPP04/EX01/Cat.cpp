/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:45:19 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 18:53:47 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	brain = new Brain();
	std::cout << "A Cat was created [" << type << "]" << std::endl;
}

Cat::Cat(Cat const &cpy)
{
	std::cout << "the Cat was copied [" << type << "]" << std::endl;
	*this = cpy;
	brain = NULL;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "A Cat was destroyed [" << type << "]" << std::endl;
}

Cat &Cat::operator=(const Cat &cpy)
{
	std::cout << "Cat assigned operation[" << type << "]" << std::endl;
	if (this != &cpy)
	{
		if (brain)
			delete brain;
		brain = new Brain(*cpy.brain);
		Animal::operator=(cpy);
	}
	return *this;
}

void 	Cat::makeSound(void) const
{
	std::cout << "[" << type << "] says MIHAO!" << std::endl;
}

void Cat::setIdea(const int i, const std::string tk)
{
	std::cout << "Cat [" << type << "] thinking" << std::endl;
	brain->setIdea(i, tk);
}

void Cat::printIdeas(void)
{
	std::cout << "Cat [" << type << "] explain" << std::endl;
	brain->printIdeas();
}