/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:59:52 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/06 19:11:03 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



int main(int argc, char **argv)
{
	std::string str_example_1 = "100";
	std::string str_example_2 = "2.256";
	std::string str_example_3 = "200 Educative";

	// using stoi() on various kinds of inputs
	int int_1 = std::stoi(str_example_1);
	double int_2 = std::stod(str_example_2);
	int int_3 = std::stoi(str_example_3);

	std::cout << "int_1 : " << int_1 << std::endl;
	std::cout << "int_2 : " << int_2 << std::endl;
	std::cout << "int_3 : " << int_3 << std::endl;
}