/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bookphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 01:45:30 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/07/19 17:35:00 by amarcell         ###   ########.fr       */
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

	std::cout << std::setw(10) << "----ID----" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last  Name" << "|";
	std::cout << std::setw(10) << "-Nickname-" << std::endl;
	i = 0;
	while(i < _ncontacts)
		_contacts[i++].print_essensial();
	std::cout << std::setw(10) << "-------------------------------------------" << "" \
		<< std::endl;
	if (!_ncontacts)
	{
		std::cout << "The Phonebook is empty" << std::endl;
		return ;
	}
	i = 0;
	while (std::cin.fail() || 1 > i || i > _ncontacts)
	{
		std::cout << "Chose an ID: ";
		std::cin >> i;
		std::cin.clear();
		std::cin.ignore(256,'\n');
	}
	std::cout << "\e[1;1H\e[2J";
	_contacts[i - 1].print_contact();	
}