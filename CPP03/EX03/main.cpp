/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:49:57 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/31 12:55:51 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap bot1("Steve");

	bot1.attack("BoB");
	bot1.takeDamage(5);
	bot1.beRepaired(10);
	bot1.highFivesGuys();
	bot1.guardGate();
	bot1.whoAmI();

}