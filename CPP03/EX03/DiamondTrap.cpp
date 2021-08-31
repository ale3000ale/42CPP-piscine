/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:53:08 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/31 11:04:26 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

	DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name")
	{
		name = _name;
		hp = FragTrap::hp;
		energy = ScavTrap::energy;
		dmg = ScavTrap::att;
		att = FragTrap::att;
		std::cout << "Flagtrap[" << name <<"] join the battle" << std::endl
		<< "HP: " << hp << std::endl << "Energy: " << energy << std::endl
		<< "Att dmg: " << att << std::endl << "Att: " << dmg << std::endl;
		
	}
	
	DiamondTrap::~DiamondTrap(void);
	
	void	DiamondTrap::whoAmI(void);