/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:59:27 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/10 18:15:30 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H__
#define EASYFIND_H__ 

#include <iostream>

template<typename Container>
int easyfind(Container const &container, int elem)
{
	int i = 0;
	for (int c : container) 
	{
		if (elem == c)
			return(i);
		i++;
	}
	return (-1);
}

#endif