/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:43:34 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 18:48:05 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "An empty Brain was created" << std::endl;
}
Brain::~Brain()
{
	std::cout << "A Brain was destryed" << std::endl;
}
Brain::Brain(Brain &cpy)
{
	std::cout << "A Brain copy" << std::endl;
	*this = cpy;
}

Brain &Brain::operator=(Brain &cpy)
{
	std::cout << "A Brain assignation" << std::endl;
	for(int i=0;i<100;i++)
		ideas[i] = cpy.ideas[i];
	return (*this);
}

void Brain::setIdea(int i, std::string idea)
{
	ideas[i % 100] = idea;
	std::cout << "idea n" << i % 100<< "  " << idea << std::endl;
}
void Brain::printIdeas(void)
{
	for(int i= 0 ; i<100; i++)
		std::cout << "idea " << i << ") " << ideas[i] << std::endl;
}