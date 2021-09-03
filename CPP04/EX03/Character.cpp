/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:32:23 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/03 14:50:26 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

	Character::Character() : name("None"), inv(new AMateria*[SLOTS])
	{
		for(int i = 0;i < SLOTS;i++)
			inv[i] = NULL;
	}
	
	Character::Character(const Character &cpy): inv(new AMateria*[SLOTS])
	{
		*this = cpy;
	}

	Character::Character(std::string const _name): name(_name), inv(new AMateria*[SLOTS])
	{
		for(int i = 0; i < SLOTS ; i++)
			inv[i] = NULL;
	}
	
	Character::~Character()
	{
		for(int i = 0; i < SLOTS ; i++)
		{
			if (inv[i])
				delete inv[i];
		}
		delete [] inv;
	}
	
	Character &	Character::Character::operator=(Character const & cpy)
	{
	if ( this != &cpy)
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

	std::string const & Character::getName() const
	{
		return name;
	}
	
	void Character::equip(AMateria* m)
	{
		for(int i = 0; i < SLOTS ; i++)
		{
			if (!inv[i])
			{
				inv[i] = m;
				return;
			}
		}
	}

	void Character::unequip(int idx)
	{
		if (idx < SLOTS && inv[idx])
			inv[idx] = NULL;
	}
	void Character::use(int idx, ICharacter& target)
	{
		if (idx < SLOTS && inv[idx])
			inv[idx]->use(target);
	}
	