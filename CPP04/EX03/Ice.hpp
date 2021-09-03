/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:01:53 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/03 15:05:05 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
#include "ICharacter.hpp"

class Ice: public AMateria
{
	
	public:

		Ice();
		Ice(Ice const &src);
		~Ice();
		Ice &operator=(Ice const & rhs);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);

	
};

#endif