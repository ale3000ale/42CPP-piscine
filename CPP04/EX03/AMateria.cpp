/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:57:31 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 17:01:06 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &src): m_type(src.m_type)
{
}

AMateria::AMateria(std::string const &type): m_type(type)
{
}

AMateria::~AMateria()
{
}


AMateria &AMateria::operator=(AMateria const &rhs)
{
	(void)rhs;
	return *this;
}

void	AMateria::use(ICharacter & target)
{
	(void)target;
}

std::string const &	AMateria::getType(void) const
{
	return (m_type);
}