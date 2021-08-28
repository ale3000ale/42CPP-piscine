/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:21:38 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/17 20:40:15 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H__
# define HUMANA_H__

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		_weapon;

public:
	HumanA(std::string name, Weapon Weapon);
	void	attack();
};

#endif