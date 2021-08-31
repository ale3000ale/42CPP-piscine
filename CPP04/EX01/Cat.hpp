/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:45:16 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 18:35:13 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H__
#define CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;
	
public:
	Cat();
	Cat(Cat const &cpy);
	~Cat();
	
	Cat & operator=(const Cat &cpy);
	void makeSound(void) const;
	void setIdea(const int i, const std::string tk);
	void printIdeas(void);
};



#endif