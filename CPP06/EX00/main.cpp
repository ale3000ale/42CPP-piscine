/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:59:52 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/08 17:58:58 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "imports.hpp"

int main(int argc, char **argv) 
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (1);
	}
	converter(argv[1]);
	return (0);
}