/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:59:52 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/08 22:05:59 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void) 
{
	Data		*data = new Data(42);
	uintptr_t	raw = serialize(data);
	Data		*ptr = deserialize(raw);

	std::cout << "Address:               " << data << "  [" << data->getData() << "]"<< std::endl;
	std::cout << "After serialization:   " << raw << std::endl;
	std::cout << "After deserialization: " << ptr << "  [" << data->getData() << "]" <<  std::endl;
	delete ptr;
	return 0;
}