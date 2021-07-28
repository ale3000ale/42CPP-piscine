/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 01:14:54 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/07/28 02:43:50 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include <vector>

Zombie* zombieHorde( int N, std::string name )
{
	static std::vector<Zombie>  horde(N, name);
	return &horde[0];
}
