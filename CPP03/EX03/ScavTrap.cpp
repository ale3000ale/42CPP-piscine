/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:06:06 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/31 12:47:48 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


	#include "ScavTrap.hpp"
	
	ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
	{
		hp = 100;
		energy = 50;
		att = 20;
		
		std::cout << "ScavTrap[" << name <<"] join the battle" << std::endl
		<< "HP: " << hp << std::endl << "Energy: " << energy << std::endl
		<< "Att: " << att << std::endl;
	}
	
	ScavTrap::ScavTrap() : ClapTrap("NONE")
	{
		hp = 100;
		energy = 50;
		att = 20;
		
		std::cout << "ScavTrap[" << name <<"] join the battle" << std::endl
		<< "HP: " << hp << std::endl << "Energy: " << energy << std::endl
		<< "Att: " << att << std::endl;
	}

	ScavTrap::~ScavTrap()
	{
		std::cout	<< "ScavTrap[" << name <<"] was destroyed" << std::endl;
	}

	void ScavTrap::guardGate()
	{
		std::cout	<< "ScavTrap[" << name <<"] enter in guard gate mode" << std::endl;

	}


