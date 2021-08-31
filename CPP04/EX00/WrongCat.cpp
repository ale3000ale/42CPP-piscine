/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:21:00 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 15:34:46 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
	std::cout << "A WrongCat was created [" << type << "]" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "A WrongCat was destroyed [" << type << "]" << std::endl;
}

void 	WrongCat::makeSound(void) const
{
	std::cout << " WrongCat [" << type << "] says MIHAO!" << std::endl;
}