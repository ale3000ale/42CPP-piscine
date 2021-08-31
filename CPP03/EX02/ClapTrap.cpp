/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:18:56 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/30 17:55:45 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

	ClapTrap::ClapTrap(const std::string _name) : name(_name), hp(10), energy(10), att(0)
	{
		std::cout << "ClapTrap[" << name <<"] join the battle" << std::endl;
	}
	
	ClapTrap::ClapTrap(const ClapTrap &cpy)
	{
		std::cout	<< "ClapTrap[" << name <<"] the copy of ClapTrap[" 
					<< cpy.name <<"] join the battle" << std::endl;
		hp = cpy.hp;
		name = cpy.name;
		att = cpy.att;
		energy = cpy.energy;
	}

	ClapTrap::~ClapTrap()
	{
		std::cout	<< "ClapTrap[" << name <<"] was destroyed" << std::endl;
	}

	void ClapTrap::attack(std::string const &target)
	{
		std::cout	<< "ClapTrap[" << name <<"] attack " << "ClapTrap[" << target 
					<<"], causing " << att <<" points of damage!" << std::endl;

	}
	
	void ClapTrap::takeDamage(unsigned int amount)
	{
		std::cout << "Caltrap[" << name << "] recive damage\nHP:" << hp << " -" << amount << std::endl;
		hp -= amount;
		std::cout << "HP:" << hp<< std::endl;
	}

	void ClapTrap::beRepaired(unsigned int amount)
	{
		std::cout << "Caltrap[" << name << "] was repaired\nHP:" << hp << " +" << amount << std::endl;
		hp += amount;
		if (hp > 10)
			hp = 10;
		std::cout << "HP:" << hp<< std::endl;
	}