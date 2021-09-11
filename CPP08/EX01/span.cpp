/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 01:31:48 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/09/11 17:39:23 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(): size(0)
{
}

Span::Span( const Span & src ): size(src.size), vect(src.vect)
{
}

Span::Span( unsigned int n): size(n)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	(void)(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	std::vector<int>	list = i.getList();

	for (std::vector<int>::iterator it = list.begin(); it != list.end(); it++)
	{
		std::cout << "[";
		std::cout << *it;
		if (it + 1 != list.end())
			std::cout << " | ";
		std::cout << "]";
	}
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int const nb)
{
	if (vect.size() >= size)
		throw OneNumberException();
	vect.push_back(nb);
}

unsigned int	Span::shortestSpan(void) const
{
	if (!vect.size())
		throw NoNumberException();
	else if (vect.size() == 1)
		throw OneNumberException();
	std::vector<int>	list(vect);
	unsigned int		span = longestSpan();

	std::sort(list.begin(), list.end());
	for (std::vector<int>::iterator i = list.begin(); i < list.end() - 1; i++)
	{
		if (static_cast<unsigned int>(*(i + 1) - *i) < span)
			span = *(i + 1) - *i;
	}
	return (span);
}

unsigned int	Span::longestSpan(void) const
{
	if (!vect.size())
		throw NoNumberException();
	else if (vect.size() == 1)
		throw OneNumberException();
	std::vector<int>	list(vect);

	std::sort(list.begin(), list.end());
	return (*(list.end() - 1) - *list.begin());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::vector<int>	Span::getList(void) const
{
	return (vect);
}

/* ************************************************************************** */