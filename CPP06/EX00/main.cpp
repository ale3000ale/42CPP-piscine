/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:59:52 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/07 17:09:27 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main() //int argc, char **argv
{
	std::string str_example_1 = "-100aa";
	std::string str_example_2 = "-2.f9ffaa";
	std::string str_example_3 = "-200 Educative";

	// using stoi() on various kinds of inputs
	int int_1 = std::stoi(str_example_1);
	float int_2 = std::stof(str_example_2);
	int int_3 = std::stoi(str_example_3);

	std::cout << "int_1 : " << int_1 << std::endl;
	std::cout << "int_2 : " << int_2 << std::endl;
	std::cout << "int_3 : " << int_3 << std::endl;
	return (0);
}