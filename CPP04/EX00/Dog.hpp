/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:35:03 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/03 16:10:00 by amarcell         ###   ########.fr       */
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
	
	void makeSound(void) const;
};

#endif