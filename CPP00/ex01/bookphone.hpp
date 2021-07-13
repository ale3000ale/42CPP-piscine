/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bookphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:10:10 by amarcell          #+#    #+#             */
/*   Updated: 2021/07/13 18:41:27 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOKPHONE_HPP
# define BOOKPHONE_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define MAX_CONTACTS	8

class Contact
{
	public:
		Contact(int id);
		~Contact(void);

		void	fill_contact(void);
		void	print_contact(void);
		void	print_essensial(void);

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

		void	add(Contact contact);
		void	find(std::string str);
		void	exit();
		Contact	get_contact(int id);
		bool	is_full();

	private:
		Contact	contacts[8];
		int		n_contacts;
		
};

#endif