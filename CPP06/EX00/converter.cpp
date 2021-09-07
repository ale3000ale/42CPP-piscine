/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 01:41:28 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/09/08 01:57:46 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imports.hpp"



void	to_char(std::string const s)
{
	char	c = s[0];

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

bool	to_int(std::string const s)
{
	long 		l = strtol(s.data(), NULL, 10);
	int			i;

	if (l > INT_MAX || l < INT_MIN)
	{
		std::cout << "Error: int value out of range" << std::endl;
		return (false);
	}
	i = atoi(s.data());
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(i)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	return (true);
}

bool	to_float(std::string const s)
{
	double	d = strtod(s.data(), NULL);
	float	f;

	(void)d;
	if (errno == ERANGE)
	{
		std::cout << "Error: float value out of range" << std::endl;
		return (false);
	}
	f = atof(s.data());
	if (static_cast<int>(f) > CHAR_MAX || static_cast<int>(f) < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(f)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	if (static_cast<long>(f) > INT_MAX || static_cast<long>(f) < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
	return (true);
}

bool	to_double(std::string const s)
{
	double	d = strtod(s.data(), NULL);

	if (errno == ERANGE)
	{
		std::cout << "Error: double value out of range" << std::endl;
		return (false);
	}
	if (static_cast<int>(d) > CHAR_MAX || static_cast<int>(d) < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(d)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	if (static_cast<long>(d) > INT_MAX || static_cast<long>(d) < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	return (true);
}

bool	converter(std::string const s)
{
	if (ck_char(s))
	{
		to_char(s);
		return (true);
	}
	else if (ck_int(s))
		return (to_int(s));
	else if (ck_float(s))
	{
		if (s == "nanf" || s == "+inff" || s == "-inff")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << s << std::endl;
			std::cout << "double: " << s.substr(0, s.length() - 1) << std::endl;
			return (true);
		}
		return (to_float(s));
	}
	else
	{
		if (s == "nan" || s == "+inf" || s == "-inf")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << s << "f" << std::endl;
			std::cout << "double: " << s << std::endl;
			return (true);
		}
		return (to_double(s));
	}
}