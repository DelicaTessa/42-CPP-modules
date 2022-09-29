/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/05 11:24:50 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/05 11:29:54 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {

	return reinterpret_cast<Data*>(raw);
}


int	main() {

	Data	data;

	data._name = "DataStruct";

	std::cout << "before serialisation:	" << &data._name << std::endl;

	uintptr_t	ptr = serialize(&data);
	Data*		after = deserialize(ptr);

	std::cout << "after serialisation:	" << &after->_name << std::endl;

	return (0);
}
