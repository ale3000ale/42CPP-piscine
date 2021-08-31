/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 05:10:23 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/30 17:49:52 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H__
# define CLAPTRAP_H__

#include <iostream>
#include <iomanip>

class ClapTrap
{
private:
	std::string	name;
	int			hp;
	int			energy;
	int			att;

	
public:
	ClapTrap(const std::string _name);
	ClapTrap(const ClapTrap &cpy);
	~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif