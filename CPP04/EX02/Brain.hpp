/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:40:32 by amarcell          #+#    #+#             */
/*   Updated: 2021/08/31 17:47:13 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H__
#define BRAIN_H__

#include <iostream>
#include <iomanip>

class Brain
{
private:

protected:
	std::string ideas[100];

public:
	Brain();
	Brain(Brain &cpy);
	Brain &operator=(Brain &cpy);
	~Brain();

	void setIdea(int i, std::string idea);
	void printIdeas(void);
};



#endif