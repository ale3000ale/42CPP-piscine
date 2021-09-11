/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 01:31:15 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/09/11 17:32:57 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{

	private:
		const unsigned int	size;
		std::vector<int>	vect;

	public:

		Span();
		Span( Span const & src );
		Span( unsigned int n );
		~Span();
		Span &		operator=( Span const & rhs );

		void				addNumber(int const nb);
		unsigned int		shortestSpan(void) const;
		unsigned int		longestSpan(void) const;
		std::vector<int>	getList(void) const;
		
		
		
		class NoNumberException: public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: Empty array");
			}
		};
		class OneNumberException: public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: One number in array");
			}
		};

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */