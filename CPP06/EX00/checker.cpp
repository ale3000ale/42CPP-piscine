/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 01:29:06 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/09/08 01:47:44 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imports.hpp"

bool	ck_char(std::string const & s)
{
	if (s.length() != 1 || isdigit(s[0]))
		return (false);
	return (true);
}

bool	ck_int(std::string const & s)
{
	size_t	i = 0;

	if (s.find('-') != std::string::npos && (s.find('-') != s.rfind('-')
		|| s.find('-') != 0))
		return (false);

	for (int i = 1; i < s.length(); i++)
		if (!isdigit(s[i]))
			return (false);
	
	return (true);
}

bool	ck_float(std::string const & s)
{
	size_t	i = 0;

	if (s == "-inff" || s == "+inff" || s == "nanf")
		return (true);
	if (s.find('.') == std::string::npos
		|| s.find('.') == 0 || s.find('.') == s.length() - 1
		|| s.find('.') != s.rfind('.')
		|| s.find('f') != s.length() - 1)
		return (false);
	if (s.find('-') != std::string::npos && (s.find('-') != s.rfind('-')
		|| s.find('-') != 0))
		return (false);

	for (int i = 1; i < s.length(); i++)
		if (!isdigit(s[i]) && s[i] != '.')
			return (false);

	return (true);
}

bool	ck_double(std::string const & s)
{
	size_t	i = 0;

	if (s == "-inf" || s == "+inf" || s == "nan")
		return (true);
	if (s.find('.') == std::string::npos
		|| s.find('.') == 0 || s.find('.') == s.length() - 1
		|| s.find('.') != s.rfind('.'))
		return (false);
	if (s.find('-') != std::string::npos && (s.find('-') != s.rfind('-')
		|| s.find('-') != 0))
		return (false);

	for (int i = 1; i < s.length(); i++)
		if (!isdigit(s[i]) && s[i] != '.')
			return (false);

	return (true);
}

bool	checker(std::string const & s)
{
	return (ck_char(s) || ck_int(s) || ck_float(s) || ck_double(s));
}