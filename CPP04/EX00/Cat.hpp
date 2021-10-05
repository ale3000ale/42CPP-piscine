/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:45:16 by amarcell          #+#    #+#             */
/*   Updated: 2021/10/05 17:28:21 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H__
#define CAT_H__

#include "Animal.hpp"

class Cat : public Animal
{
private:
	
public:
	Cat();
	Cat(Cat &c);
	~Cat();

	Cat &operator=(const Cat &cpy);
	void makeSound(void) const;
};



#endif