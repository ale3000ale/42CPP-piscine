/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 01:41:28 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/09/08 21:14:20 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imports.hpp"

static bool	ck_char(std::string const s)
{
	if (s.length() != 1 || isdigit(s[0]))
		return (false);
	return (true);
}

static bool	ck_int(std::string const s)
{
	if (s.find('-') != std::string::npos && (s.find('-') != s.rfind('-')
		|| s.find('-') != 0))
		return (false);

	for (int i = 1; i < (int)s.length(); i++)
		if (!isdigit(s[i]))
			return (false);
	
	return (true);
}

static bool	ck_float(std::string const s)
{
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

	for (int i = 1; i < (int)s.length(); i++)
		if (!isdigit(s[i]) && s[i] != '.')
			return (false);

	return (true);
}

static bool	ck_double(std::string const s)
{
	if (s == "-inf" || s == "+inf" || s == "nan")
		return (true);
	if (s.find('.') == std::string::npos
		|| s.find('.') == 0 || s.find('.') == s.length() - 1
		|| s.find('.') != s.rfind('.'))
		return (false);
	if (s.find('-') != std::string::npos && (s.find('-') != s.rfind('-')
		|| s.find('-') != 0))
		return (false);

	for (int i = 1; i < (int)s.length(); i++)
		if (!isdigit(s[i]) && s[i] != '.')
			return (false);

	return (true);
}

static int	identifire(std::string const s)
{
	typedef	bool	(*Cheker)(std::string const );
	Cheker ck[] = {&ck_char, &ck_int,  &ck_float, &ck_double};
	for (int i  = 0;i < 4 ; i++)
		if (ck[i](s))
			return (i);
	return (-1);
}

static bool	to_char(std::string const s)
{
	char	c = s[0];
	std::cout << "|------CHAR-----|" << std::endl;
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	return true;
}

static bool	to_int(std::string const s)
{
	long 		l = strtol(s.data(), NULL, 10);
	int			i;

	std::cout << "|------INT-----|" << std::endl;
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

static bool	to_float(std::string const s)
{
	double	d = strtod(s.data(), NULL);
	float	f;

	std::cout << "|------FLOAT-----|" << std::endl;
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

static bool	to_double(std::string const s)
{
	double	d = strtod(s.data(), NULL);

	std::cout << "|------DOUBLE-----|" << std::endl;
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

void	converter(std::string const s)
{
	typedef	bool	(*Transform)(std::string const );
	Transform tr[] = {&to_char, &to_int,  &to_float, &to_double};
	int i = identifire(s);
	if (i != -1)
	{
		if (!tr[i](s))
			std::cout <<"WARNING: non-convertible string\n";
	}
	else
		std::cout <<"WARNING: Wrong string\n";
	
}