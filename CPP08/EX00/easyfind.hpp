/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:59:27 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/11 01:23:09 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H__
#define EASYFIND_H__ 

#include <iostream>
#include <iterator>

template<typename T>
typename T::iterator easyfind(T &container, int elem)
{
	return std::find(container.begin(), container.end(), elem);
}

#endif