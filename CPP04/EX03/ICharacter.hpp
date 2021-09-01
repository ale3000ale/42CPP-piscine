/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:54:57 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 17:30:16 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H__
# define ICHARACTER_H__

# include <iostream>
# include <string>

class AMateria;

class ICharacter
{

	public:
		virtual	~ICharacter() {};
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

#endif