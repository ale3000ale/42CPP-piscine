/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:09:17 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/09/08 22:09:27 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	private:
		int data;

	public:

		Data();
		Data(int d);
		Data( Data const & src );
		~Data();

		Data &operator=( Data const & rhs );
		int	getData(void) const;
};

std::ostream	&operator<<( std::ostream & o, Data const & i );

#endif /* ************************************************************ DATA_H */