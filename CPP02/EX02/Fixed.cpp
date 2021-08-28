/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:33:42 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/27 16:14:10 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// costructor
	Fixed::Fixed() : _data(0)
	{
		
		//std::cout << "Default constructor called" << std::endl;

	}

	Fixed::Fixed(const int num) : _data(num * (1 << _fract))
	{
		//std::cout << "Int constructor called" << std::endl;
	}

	Fixed::Fixed(const float num) : _data(roundf(num * (1 << _fract)))
	{
		//std::cout << "Float constructor called" << std::endl;
	}

// copy costructor
	Fixed::Fixed(const Fixed &fix)
	{
		//std::cout << "Copy constructor called" << std::endl;
		*this = fix;
	}

// decostructor
	Fixed::~Fixed()
	{
		//std::cout << "Destructor called" << std::endl;
		_data  = 0;
	}

// overload =
	Fixed &Fixed::operator = (const Fixed &fix )
	{
		//std::cout << "Assignation operator called" << std::endl;
		this->_data = fix.getRawBits();
		return *this;
	}

	std::ostream &operator<<(std::ostream &out, Fixed const &fix)
	{
		out << fix.toFloat();
		return out;
	}

	Fixed Fixed::operator + (const Fixed &fix )
	{
		Fixed fx;
		fx.setRawBits(_data + fix.getRawBits());
		return fx;
	}
	
	Fixed Fixed::operator - (const Fixed &fix )
	{
		Fixed fx;
		fx.setRawBits(_data - fix.getRawBits());
		return fx;
	}
	
	Fixed Fixed::operator*( Fixed const & fix )
	{
		Fixed fx;
		fx.setRawBits((_data * fix.getRawBits()) >> _fract);
		return fx;
	}

	Fixed Fixed::operator/( Fixed const & fix )
	{
		Fixed fx;
		fx.setRawBits((_data / fix.getRawBits()) >> _fract);
		return fx;
	}

	Fixed	&Fixed::operator ++(void)	//pre
	{
		++_data;
		return (*this);
	}

	Fixed	Fixed::operator ++(int)		//post
	{
		Fixed ret(*this);

		++(*this);
		return (ret);
	}

	Fixed	&Fixed::operator--(void)	//pre
	{
		--_data;
		return (*this);
	}

	Fixed	Fixed::operator--(int)		//post
	{
		Fixed ret(*this);

		--(*this);
		return (ret);
	}
	
	
	bool Fixed::operator > (const Fixed &fix )
	{
		return (_data > fix.getRawBits());
	}
	bool Fixed::operator >= (const Fixed &fix )
	{
		return (_data >= fix.getRawBits());
	}

	bool Fixed::operator < (const Fixed &fix )
	{
		return (_data < fix.getRawBits());
	}

	bool Fixed::operator <= (const Fixed &fix )
	{
		return (_data <= fix.getRawBits());
	}

	bool Fixed::operator == (const Fixed &fix )
	{
		return (_data == fix.getRawBits());
	}
	
	bool Fixed::operator != (const Fixed &fix )
	{
		return (_data != fix.getRawBits());
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	
	return ( a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}