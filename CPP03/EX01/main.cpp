/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:49:57 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/30 18:30:55 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap bot1("Steve");
	ScavTrap bot2("BoB");

	bot1.attack("BoB");
	bot2.takeDamage(5);
	bot2.beRepaired(10);
	bot1.guardGate();
}