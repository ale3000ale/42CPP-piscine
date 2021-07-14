/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:23:25 by amarcell          #+#    #+#             */
/*   Updated: 2021/07/14 02:40:48 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bookphone.hpp"

Contact::Contact(void)
{
	_id = 0;
	return;
}

Contact::~Contact(void)
{
	_id = 0;
	return;
}

void	Contact::fill_contact(void)
{
	std::cout << "Contact creation: \n First Name: ";
	std::getline(std::cin, _first_name);
	std::cout << "Last Name: ";
	std::getline(std::cin, _last_name);
	std::cout << "NickName: ";
	std::getline(std::cin, _nickname);
	std::cout << "Number: ";
	std::getline(std::cin, _number);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, _secret);
	std::cout << "Birthday: ";
	std::getline(std::cin, _birthday);
	std::cout << "Borned Gender: ";
	std::getline(std::cin, _born_gender);
	std::cout << "Actual Gender: ";
	std::getline(std::cin, _actual_gender);
	return;
}

void	Contact::print_contact(void)
{
	std::cout << "Contacts n° " << _id << std::endl;
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name : " << _last_name << std::endl;
	std::cout << "Nickname  : " << _nickname << std::endl;
	std::cout << "Number: " << _number << std::endl;
	std::cout << "Darkest Secret: " << _secret << std::endl;
	std::cout << "Birthday: " << _birthday << std::endl;
	std::cout << "Borned Gender: " << _born_gender << std::endl;
	std::cout << "Actual Gender: " << _actual_gender << std::endl;
}

static std::string	truncate(std::string str)
{
	std::string	temp;

	temp = str.substr(0,10);
	if (str.length() > 10)
	{
		temp[9] = '.';
	}
	return (temp);

}

void	Contact::print_essensial(void)
{
	std::cout << std::setw(10) << _id << "|";
	std::cout << std::setw(10) << truncate(_first_name) << "|";
	std::cout << std::setw(10) << truncate(_last_name) << "|";
	std::cout << std::setw(10) << truncate(_nickname) << std::endl;
}

void	Contact::set_id(int id)
{
	_id = id;
}