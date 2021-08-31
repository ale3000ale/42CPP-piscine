/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:49:57 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/30 18:42:54 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap bot1("Steve");
	FragTrap bot2("BoB");

	bot1.attack("BoB");
	bot2.takeDamage(5);
	bot2.beRepaired(10);
	bot1.highFivesGuys();

}