/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:35:03 by amarcell          #+#    #+#             */
/*   Updated: 2021/10/05 17:38:43 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H__
#define DOG_H__

#include "Animal.hpp"

class Dog : public Animal
{

public:
	Dog();
	~Dog();
	Dog(Dog &c);

	Dog &operator=(const Dog &cpy);
	void makeSound(void) const;
};

#endif