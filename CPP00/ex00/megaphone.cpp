/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:56:29 by amarcell          #+#    #+#             */
/*   Updated: 2021/07/13 15:34:10 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

void	megaphone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		std::cout << (char)std::toupper(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			megaphone(argv[i]);
			i++;
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return 0;
}