/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bookphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:10:10 by amarcell          #+#    #+#             */
/*   Updated: 2021/07/14 02:43:11 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOKPHONE_HPP
# define BOOKPHONE_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define		MAX_CONTACTS	8

#define		EXIT	"EXIT"
#define		ADD		"ADD"
#define		SEARCH	"SEARCH"

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		void	fill_contact(void);
		void	print_contact(void);
		void	print_essensial(void);
		void	set_id(int id);

	private:
		int			_id;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;
		std::string	_birthday;
		std::string	_born_gender;
		std::string	_actual_gender;
};

class StepPhoneBook
{
	public:
		StepPhoneBook(void);
		~StepPhoneBook(void);

		void	add(void);
		void	find(void);
		bool	is_full();

	private:
		Contact	_contacts[8];
		int		_ncontacts;
};

#endif