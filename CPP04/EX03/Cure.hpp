/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:06:28 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 17:14:09 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_H__
# define CURE_H__

# include "ICharacter.hpp"

class Cure
{
	protected:
		std::string	const m_type;
		Cure &		operator=(Cure const & rhs);

	public:
		Cure();
		Cure(Cure const & src);
		~Cure();

		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif