/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:16:40 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/31 12:48:02 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H__
#define SCAVTRAP_H__
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

private:
	/* data */
public:

	ScavTrap();
	ScavTrap(std::string _name);
	~ScavTrap();

	void guardGate();
};



#endif


