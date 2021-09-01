/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:16:28 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/01 14:33:19 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H__
#define ANIMAL_H__

#include <iostream>
#include <iomanip>

class Animal
{
private:

protected:
	std::string type;


public:
	Animal();
	Animal(std::string _type);
	Animal(const Animal &cpy);
	virtual ~Animal();

	Animal		&operator=(const Animal &cpy);
	virtual void 		makeSound(void) const = 0;
	std::string 		getType(void) const;
};



#endif