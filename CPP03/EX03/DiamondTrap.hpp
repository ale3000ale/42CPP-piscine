/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:49:59 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/31 11:03:48 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string		name;
		int	hp;
		int	energy;
		int dmg;
		int	att;
	public:
		DiamondTrap(std::string Name);
		~DiamondTrap(void);
		
		void	whoAmI(void);
};

#endif /* DIAMONDTRAP_HPP */