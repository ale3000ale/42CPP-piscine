/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:20:49 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/09 17:51:04 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H__
#define ITER_H__

#include <iostream>
#include <string>

template<typename A>
void iter(A *a, int n, void (*f)(A))
{
	for (int i = 0; i < n; i++)
		f(a[i]);
}

#endif