/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imports.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:09:10 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/08 01:57:48 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H__
#define CHECKER_H__

#include <iostream>
#include <string>
#include <iomanip>

bool	checker(std::string const s);
bool	ck_char(std::string const & s);
bool	ck_int(std::string const & s);
bool	ck_float(std::string const & s);
bool	ck_double(std::string const & s);

#endif