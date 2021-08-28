/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:19:57 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/08/28 18:34:21 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed sign (Point p1, Point p2, Point p3)
{
	return 	((p1.getX() - p3.getX()) * (p2.getY() - p3.getY())) - 
			((p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
}

static bool PointInTriangle (Point pt, Point v1, Point v2, Point v3)
{
	Fixed d1, d2, d3;
	bool has_neg, has_pos;
	d1 = sign(pt, v1, v2);
	d2 = sign(pt, v2, v3);
	d3 = sign(pt, v3, v1);
	
	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	return !(has_neg && has_pos);
}

bool isInEdge(Point const a, Point const b, Point const point)
{
	if (b.getX() == a.getX())
		return point.getX() == b.getX();
	else if (b.getY() == a.getY())
		return point.getX() == b.getX();
	else
		return	(
		(point.getX() - a.getX()) / (b.getX() - a.getX()) == 
		(point.getY() - a.getY()) / (b.getY() - a.getY())
				);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (point != a && point != b && point != c &&
		!isInEdge(a,b,point) && !isInEdge(a,c,point) && !isInEdge(c,b, point))
		return(PointInTriangle (point, a, b, c));
	return false;
}