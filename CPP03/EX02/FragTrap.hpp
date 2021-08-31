/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:36:39 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/30 18:41:31 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H__
#define FRAGTRAP_H__
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

private:
	
public:

	FragTrap(std::string _name);
	~FragTrap();

	 void highFivesGuys(void);
};

#endif