/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:09:30 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/02 16:14:46 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H__
# define MATERIASOURCE_H__

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

# define MAX 10

class MateriaSource: public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource(MateriaSource const &cpy);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const &cpy);
		void	learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const &type);

	private:
		AMateria	**sources;
};


#endif 