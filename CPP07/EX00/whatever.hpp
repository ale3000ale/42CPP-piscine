/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:17:57 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/09 17:14:41 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H__
#define WHATEVER_H__

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	T c;
	try
	{
		c = a;
		a = b;
		b = c;
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR BECAUSE: " <<e.what() << '\n';
	}
}


template<typename T>
T min(T &a, T &b)
{
	try
	{
		if (a < b)
			return a;
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR BECAUSE: " <<e.what() << '\n';
	}
	return b;
}

template<typename T>
T max(T &a, T &b)
{
	try
	{
		if (a > b)
			return a;
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR BECAUSE: " <<e.what() << '\n';
	}
	return b;
}

#endif