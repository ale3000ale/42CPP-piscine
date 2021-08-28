/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:19:05 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/17 20:44:56 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

void	HumanB::setWeapon(Weapon weapon)
{
	_weapon = weapon;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
