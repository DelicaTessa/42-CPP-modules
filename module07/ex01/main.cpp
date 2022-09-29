/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 08:57:56 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/07 09:49:56 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
void print( T const & x ) { std::cout << x << std::endl;}

int main() {
	
	int arr[] = {1, 1, 2, 4};
	iter(arr, 4, print);

	std::cout << std::endl;

	double arr2[] = {1.1, 1.2, 1.3, 1.4};
	iter(arr2, 4, print);

	std::cout << std::endl;

	std::string arr3[] = {"draak", "nog een draak", "en nog een draak", "en de laatste draak"};
	iter(arr3, 4, print);

	return 0;
}
