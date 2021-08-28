/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:57:18 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/17 20:44:25 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::Weapon()
{
	_type = "";
}

Weapon::~Weapon()
{
	
}

std::string Weapon::getType(void)
{
	return _type;
}

void Weapon::setType(std::string tp)
{
	_type = tp;
}
