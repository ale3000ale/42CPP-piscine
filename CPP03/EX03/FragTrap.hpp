/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:36:39 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/31 12:46:18 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H__
#define FRAGTRAP_H__
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

private:
	
public:
	FragTrap();
	FragTrap(std::string _name);
	~FragTrap();

	 void highFivesGuys(void);
};

#endif