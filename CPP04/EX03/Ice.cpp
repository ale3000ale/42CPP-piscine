/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:04:18 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 17:06:14 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice( const Ice & src ): AMateria(src.m_type)
{
}

Ice::~Ice()
{
}

Ice &	Ice::operator=(Ice const & rhs)
{
	(void)rhs;
	return *this;
}


AMateria*	Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}