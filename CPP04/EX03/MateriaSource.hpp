/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:09:30 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 19:13:32 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H__
# define MATERIASOURCE_H__

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );
		void	learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const & type);

	private:
		AMateria	**m_source;

};


#endif 