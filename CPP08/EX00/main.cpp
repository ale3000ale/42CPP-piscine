/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:15:34 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/10 18:35:37 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
using namespace std;
 
int main()
{
    std::vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
	std::cout << "The num: " << easyfind(vect, 20) << std::endl;
	return (0);
}