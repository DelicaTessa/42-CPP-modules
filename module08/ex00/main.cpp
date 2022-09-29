/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 08:57:20 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/08 09:29:42 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main() {

	int arr[] = { 3, 1, 5, 6, 6, 7, 9, 2 };

	std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
	
	try {
		std::cout << *easyfind(v, 2) << std::endl;
		std::cout << *easyfind(v, 13) << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
