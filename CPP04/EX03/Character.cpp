/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:32:23 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 18:58:56 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

	Character() : name("None"), inv(new AMateria*[SLOTS])
	{
		for(int i = 0; i < SLOTS ; i++)
			inv[i] = NULL;
	}
	
	Character(const Character &cpy): inv(new AMateria*[SLOTS])
	{
		*this = cpy;
	}

	Character(std::string const _name): name(_name), inv(new AMateria*[SLOTS])
	{
		for(int i = 0; i < SLOTS ; i++)
			inv[i] = NULL;
	}
	
	~Character()
	{
		for(int i = 0; i < SLOTS ; i++)
			delete inv[i];
		delete [] inv;
	}
	
	Character &	Character::operator=(Character const & cpy)
	{
	if ( this != &rhs )
	{
		name = cpy.getName();
		for(int i = 0; i < SLOTS ; i++)
		{
			if (inv[i])
				delete inv[i];
			inv[i] = cpy.inv[i]->clone();
		}
	}
	return *this;
	}

	std::string const & getName() const
	{
		return name;
	}
	
	void equip(AMateria* m)
	{
		size_t	i = 0;

		for(int i = 0; i < SLOTS ; i++)
		{
			if (!inv[i])
			{
				inv[i] = m;
				return;
			}
		}
	}

	void unequip(int idx)
	{
		if (idx < INV_SIZE && inv[idx])
			inv[idx] = NULL;
	}
	void use(int idx, ICharacter& target)
	{
		if (idx < INV_SIZE && inv[idx])
			inv[idx]->use(target);
	}
	