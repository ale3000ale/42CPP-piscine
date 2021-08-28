/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:51:17 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/18 01:04:44 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
private:
	std::string		_type;
	
public:

	Weapon(std::string type);
	Weapon();
	~Weapon();
	std::string 	getType(void);
	void			setType(std::string tp);
};

#endif
