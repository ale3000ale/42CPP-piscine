/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:06:28 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/03 14:51:11 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_H__
# define CURE_H__

# include "ICharacter.hpp"

class Cure: public AMateria
{
	protected:
		std::string	const m_type;
		

	public:
		Cure();
		Cure(Cure const &cpy);
		~Cure();
		Cure &operator=(Cure const & cpy);

		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif