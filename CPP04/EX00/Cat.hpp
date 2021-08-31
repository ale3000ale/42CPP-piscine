/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:45:16 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 14:01:31 by amarcell         ###   ########.fr       */
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
	~Cat();

	void makeSound(void) const;
};



#endif