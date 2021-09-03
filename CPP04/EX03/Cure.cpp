/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:14:25 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/03 14:53:39 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

	Cure &Cure::operator=(Cure const &cpy)
	{
		(void)cpy;
		return *this;
	}
	
	Cure::Cure() : AMateria("cure")
	{}
	
	Cure::Cure(Cure const & cpy) : AMateria(cpy.getType())
	{}
	
	Cure::~Cure()
	{}

	AMateria* Cure::clone(void) const
	{
		return (new Cure());
	}

	void Cure::use(ICharacter& target)
	{
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	}