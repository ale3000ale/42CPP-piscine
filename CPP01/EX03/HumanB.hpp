/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:21:38 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/17 20:35:31 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H__
# define HUMANB_H__

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		_weapon;

public:
	HumanB(std::string name);


	void	setWeapon(Weapon weapon);
	void	attack();
};

#endif