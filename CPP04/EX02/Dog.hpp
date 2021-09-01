/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:35:03 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 18:35:17 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H__
#define DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	Dog(Dog const &cpy);
	Dog &operator=(Dog const &cpy);
	~Dog();
	
	void makeSound(void) const;
	void setIdea(const int i, const std::string tk);
	void printIdeas(void);
};

#endif