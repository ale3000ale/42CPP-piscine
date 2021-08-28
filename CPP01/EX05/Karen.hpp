/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:50:47 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/21 16:09:09 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H__
# define KAREN_H__

#include <iostream>
#include <iomanip>

class Karen
{
private:
	void	debug();
	void	error();
	void	info();
	void	warning();

public:
	void complain( std::string level );
};

#endif