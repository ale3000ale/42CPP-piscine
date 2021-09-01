/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:01:53 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 17:03:03 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	private:
		Ice &		operator=(Ice const & rhs);
	public:

		Ice();
		Ice(Ice const &src);
		~Ice();

		AMateria*	clone(void) const;
		void		use(ICharacter& target);

	
};

#endif