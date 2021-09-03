/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:08:54 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/03 14:55:27 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

	MateriaSource::MateriaSource() : sources(new AMateria*[MAX])
	{
		for(int i = 0; i < MAX ; i++)
			sources[i] = NULL;
	}
	
	MateriaSource::MateriaSource(MateriaSource const &cpy): sources(new AMateria*[MAX])
	{
		for(int i = 0; i < MAX ; i++)
			sources[i] = cpy.sources[i]->clone();
		
	}
	
	MateriaSource::~MateriaSource()
	{
		for(int i = 0; i < MAX ; i++)
			delete sources[i];
		delete [] sources;
	}

	MateriaSource 	&MateriaSource::operator=(MateriaSource const &cpy)
	{
		if (this != &cpy)
		{
			for(int i = 0; i < MAX ; i++)
			{
				if (sources[i])
					delete sources[i];
				sources[i] = cpy.sources[i]->clone();
			}
		}
		return *this;
	}
	
	void			MateriaSource::learnMateria(AMateria *m)
	{
		for(int i = 0; i < MAX ; i++)
		{
			if (!sources[i])
			{
				sources[i] = m;
				return ;
			}
		}
	}
	
	AMateria*		MateriaSource::createMateria(std::string const &type)
	{
		for(int i = 0; i < MAX ; i++)
		{
			if (sources[i] && sources[i]->getType() == type)
				return sources[i]->clone();
		}
		return NULL;
	}

