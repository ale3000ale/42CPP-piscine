/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:10:28 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/09/08 22:11:04 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H__
# define CLASS_H__

# include <iostream>
# include <string>

class Base 
{
		public: virtual ~Base(void) {}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

#endif /* ************************************************************ BASE_H */