/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:53:08 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/31 12:54:59 by amarcell         ###   ########.fr       */
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
		std::cout << "DiamondTrap[" << name <<"] join the battle" << std::endl
		<< "HP: " << hp << std::endl << "Energy: " << energy << std::endl
		<< "Att dmg: " << att << std::endl << "Att: " << dmg << std::endl;
		
	}
	
	DiamondTrap::~DiamondTrap(void)
	{
		std::cout	<< "DiamondTrap[" << name <<"] was destroyed" << std::endl;
	}
	
	void	DiamondTrap::whoAmI(void)
	{
		std::cout	<< "I am " << name <<" we are" << ClapTrap::name << std::endl;
	}