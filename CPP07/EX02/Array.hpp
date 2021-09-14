/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:53:57 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/10 15:19:02 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array
{
	private:
		T	*array;
		unsigned int _n;
	public:

		Array(): array(new T[0]), _n(0){}
		Array(unsigned int n): array(new T[n]), _n(n){}
		Array( Array const & src ): array(new T[src.getLen()]), _n(src.getLen())
		{
			for(unsigned int i = 0; i < _n; i++)
				array[i] = src.getArray()[i];
		}

		~Array(){
			delete[] array;
		}

		Array &		operator=( Array const & src )
		{
			delete[] array;
			array = new T[src.getLen()];
			_n = src.getLen();
			for(unsigned int i = 0; i < _n; i++)
				array[i] = src.getArray()[i];
		}
		unsigned int	getLen() const {return _n;}
		T*				getArray() const {return array;}
		void			setArray(unsigned int i, T e) {array[i] = e;}

};

template<typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> const & a )
{
	o << "|";
	for(unsigned int i = 0; i < a.getLen(); i++)
		o << a.getArray()[i] << "|";
	return o;
}

#endif /* *********************************************************** ARRAY_H */