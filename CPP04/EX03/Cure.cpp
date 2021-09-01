/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:14:25 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 17:19:07 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

	Cure &operator=(Cure const & rhs)
	{
		(void)rhs;
		return this*;
	}
	Cure() : AMateria("cure")
	{}
	
	Cure(Cure const & src) : AMateria(src.getType())
	{}
	
	~Cure()
	{}

	AMateria* clone(void) const
	{
		return (new Cure());
	}

	void use(ICharacter& target)
	{
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	}