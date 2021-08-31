/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:16:40 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/30 18:27:07 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H__
#define SCAVTRAP_H__
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

private:
	/* data */
public:

	ScavTrap(std::string _name);
	~ScavTrap();

	void guardGate();
};



#endif


