/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:52:07 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 17:06:44 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATRERIA_H__
# define AMATERIA_H__

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	const m_type;
		AMateria &		operator=( AMateria const & rhs );

	public:
		AMateria();
		AMateria( AMateria const & src );
		AMateria( std::string const & type );
		virtual ~AMateria();

		std::string const & getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);

	

};

#endif