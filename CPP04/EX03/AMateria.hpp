/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:52:07 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/03 16:23:18 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_H__
# define AMATERIA_H__

# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	const m_type;

	public:
		AMateria();
		AMateria(AMateria const & src);
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria &operator=(AMateria const &rhs);

		std::string const & getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif