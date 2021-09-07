/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheker.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:39:20 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/07 17:12:13 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cheker.hpp"

bool cheker_int(std::string const s)
{
	int neg = 0;

	if(s[0] == '-')
		neg = 1;
	for (;s[neg];neg++)
	{
		if (!isnumber(s[neg]))
			break;
	}
	if (s[neg] == '.')
		return (false);
}

int cheker(std::string const s)
{
	(void)s
}