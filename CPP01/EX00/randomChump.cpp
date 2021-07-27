/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 01:06:04 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/07/28 01:08:56 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie *z;

	z = newZombie(name);
	z->announce();
	delete z;
}