/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:23:35 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 17:45:14 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H__
# define CHARACTER_H__

#define SLOTS 4;

private:
	std::string 		name;
	AMateria			**inv;
	
public:
	Character();
	Character(const Character &cpy);
	Character(std::string const _name);
	~Character();
	

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	Character &operator=(Character const &cpy);


#endif