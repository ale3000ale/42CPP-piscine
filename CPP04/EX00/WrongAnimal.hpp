/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:22:21 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 15:22:52 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H__
#define WRONGANIMAL_H__

#include <iostream>
#include <iomanip>

class WrongAnimal
{
private:

protected:
	std::string type;


public:
	WrongAnimal();
	WrongAnimal(std::string _type);
	WrongAnimal(const WrongAnimal &cpy);
	~WrongAnimal();

	WrongAnimal 	&operator = (const WrongAnimal &cpy);
	void 			makeSound(void) const;
	std::string 	getType(void) const;
};



#endif