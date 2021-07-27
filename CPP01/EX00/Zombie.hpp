/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 00:32:45 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/07/28 01:05:52 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H__

#include <iostream>
#include <iomanip>

class Zombie
{

private:

	std::string	_name;

public:

	Zombie(std::string name);
	~Zombie(void);
	
	void	announce( void );
	
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif
