/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 01:31:15 by alexmarcell       #+#    #+#             */
/*   Updated: 2021/09/11 01:35:54 by alexmarcell      ###   ########.fr       */
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

		void	addNumber(int const nb);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
		std::vector<int>	getList(void) const;
		
		
		template<typename InputIterator>
		void	addRange(InputIterator first, InputIterator last);
		
		class SizeMaxReachedException: public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: max size has been reached");
			}
		};
		class NoNumberException: public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: empty array");
			}
		};
		class LonelyNumberException: public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: number in array");
			}
		};

};

template<typename InputIterator>
void	Span::addRange(InputIterator first, InputIterator last)
{
	while (first != last)
	{
		if (vect.size() >= size)
			throw SizeMaxReachedException();
		vect.push_back(*first);
		first++;
	}
	// Invalid arguments cause undefined behavior
}

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */