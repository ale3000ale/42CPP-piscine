/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:25:07 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/09/14 11:53:36 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H__
# define POINT_H__

#include "Fixed.hpp"


class Point
{
private:
	const	Fixed	x, y;

public:
	Point();
	Point(const float _x, const float _y);
	Point(const Point &pt);

	~Point();

	Point 	&operator = (const Point &pt );
	bool 	operator == (const Point &pt ) const;
	bool 	operator != (const Point &pt ) const;

	Fixed getX() const;
	Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &out, Fixed const &i);
#endif