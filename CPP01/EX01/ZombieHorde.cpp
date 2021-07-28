/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 01:14:54 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/07/28 03:02:42 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include <vector>

Zombie *zombieHorde( int N, std::string name ) {
	if ( N < 0 )
		return NULL;

	Zombie *horde = new Zombie[N]();

	for ( int i = 0 ; i < N ; i++ ){
		horde[i].setName( name );
	}
	return horde;
}
