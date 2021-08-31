/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:49:57 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/30 17:52:57 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bot1("Steve");
	ClapTrap bot2("BoB");

	bot1.attack("BoB");
	bot2.takeDamage(5);
	bot2.beRepaired(10);
}