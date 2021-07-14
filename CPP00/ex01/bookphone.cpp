/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bookphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 01:45:30 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/07/14 03:10:58 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bookphone.hpp"

StepPhoneBook::StepPhoneBook(void)
{
	return;
}

StepPhoneBook::~StepPhoneBook(void)
{
	return;
}

bool	StepPhoneBook::is_full(void)
{
	return (_ncontacts == MAX_CONTACTS);
}

void	StepPhoneBook::add(void)
{
	if (!StepPhoneBook::is_full())
	{
		_contacts[_ncontacts].set_id(_ncontacts + 1);
		_contacts[_ncontacts].fill_contact();
		_ncontacts++;
	}
}

void	StepPhoneBook::find(void)
{
	int	i;
	std::string inutile;

	i = 0;
	while(i < _ncontacts)
		_contacts[i++].print_essensial();
	i = 0;
	while (!i)
	{
		std::cout << "Chose an ID: ";
		std::cin >> i;
		if (1 > i || i > _ncontacts)
			i = 0;
	}
	
	std::cout << "\e[1;1H\e[2J" << std::endl;
	_contacts[i - 1].print_contact();
}