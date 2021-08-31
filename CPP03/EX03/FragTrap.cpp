/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:36:04 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/31 12:47:03 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
	hp = 100;
	energy = 100;
	att = 30;
	
	std::cout << "Flagtrap[" << name <<"] join the battle" << std::endl
	<< "HP: " << hp << std::endl << "Energy: " << energy << std::endl
	<< "Att: " << att << std::endl;
}

FragTrap::FragTrap(): ClapTrap("NONE")
{
	hp = 100;
	energy = 100;
	att = 30;
	
	std::cout << "Flagtrap[" << name <<"] join the battle" << std::endl
	<< "HP: " << hp << std::endl << "Energy: " << energy << std::endl
	<< "Att: " << att << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout	<< "FragTrap[" << name <<"] was destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap[" << name <<"] say: GIVE ME AN HIGH FIVE BRO!" << std::endl;
}

