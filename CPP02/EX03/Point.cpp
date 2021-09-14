/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:45:38 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/09/14 11:54:45 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

	Point::Point() : x(0), y(0)
	{
	}

	Point::Point(const float _x, const float _y) : x(_x), y(_y)
	{
	}

	Point::Point(const Point &pt) :  x(pt.x.toFloat()), y(pt.y.toFloat())
	{
	}

	Point::~Point()
	{
	}

	Point 	&Point::operator = (const Point &pt )
	{
		return *new Point(pt.x.toFloat(), pt.y.toFloat());
	}
	
	bool 	Point::operator == (const Point &pt ) const
	{
		return ((Fixed)x == (Fixed)pt.x  && (Fixed)y == (Fixed)pt.y);
	}

	bool 	Point::operator != (const Point &pt ) const
	{
		return !(*this == pt);
	}

	Fixed Point::getX() const
	{
		return x;
	}
	Fixed Point::getY() const
	{
		return y;
	}

	std::ostream &operator<<(std::ostream &out, Point const &i)
	{
		out << "X: " << i.getX() << " Y: " << i.getY() << std::endl;
		return out;
	}