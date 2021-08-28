/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:33:42 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/25 17:33:52 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// costructor
	Fixed::Fixed() : _data(0)
	{
		std::cout << "Default constructor called" << std::endl;

	}

	Fixed::Fixed(const int num) : _data(num << _fract) 
	{
		std::cout << "Int constructor called" << std::endl;
	}

	Fixed::Fixed(const float num) : _data(roundf(num * (1 << _fract)))
	{
		std::cout << "Float constructor called" << std::endl;
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

	std::ostream &operator<<(std::ostream &out, Fixed const &fix)
	{
		out << fix.toFloat();
		return out;
	}

//function

	void	Fixed::setRawBits(int const raw)
	{
		_data = raw;
	}

	int	Fixed::getRawBits(void) const
	{
		return (_data);
	}

	float	Fixed::toFloat(void) const
	{
		return (((float)(_data / (float)(1 << _fract))));
	}

	int		Fixed::toInt(void) const
	{
		return (_data >> _fract);
	}