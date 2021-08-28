/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:33:42 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/24 16:33:51 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// costructor
	Fixed::Fixed() : _data(0)
	{
		std::cout << "Default constructor called" << std::endl;

	}

// copy costructor
	Fixed::Fixed(const Fixed &fix)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = fix;
	}

// decostructor
	Fixed::~Fixed()
	{
		std::cout << "Destructor called" << std::endl;
		_data  = 0;
	}

// overload =
	Fixed &Fixed::operator = (const Fixed &fix )
	{
		std::cout << "Assignation operator called" << std::endl;
		if ( this != &fix )
			this->_data = fix.getRawBits();
		return *this;	
	}

//function

	void	Fixed::setRawBits(int const raw)
	{
		std::cout << "setRawBits member function called" << std::endl;
		_data = raw;
	}

	int	Fixed::getRawBits(void) const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return (_data);
	}