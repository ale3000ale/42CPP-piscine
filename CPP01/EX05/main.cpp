/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:50:41 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/22 15:20:32 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen	kr;
	kr.complain("DEBUG");
	kr.complain("INFO");
	kr.complain("WARNING");
	kr.complain("ERROR");
}