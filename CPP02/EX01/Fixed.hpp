/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:05:40 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/25 17:35:25 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H__
# define FIXED_H__

#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed
{
private:
	int					_data;
	static const int	_fract = 8;
	
public:
	Fixed();
	Fixed(int num);
	Fixed(float num);
	Fixed(const Fixed &fix);

	~Fixed();
	
	Fixed &operator = (const Fixed &fix );
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fix);

#endif