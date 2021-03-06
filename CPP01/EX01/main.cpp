/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 00:32:37 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/12 18:14:16 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{	
	int		N = 3;
	Zombie	*horde = zombieHorde(N, "Genoveffo");

	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
}
