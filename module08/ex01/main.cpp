/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 09:31:57 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/08 10:20:35 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main() {

	Span normalSpan = Span(5);

	std::cout << "Normal use of functions:" << std::endl;
	try {

		normalSpan.addNumber(6);
		normalSpan.addNumber(3);
		normalSpan.addNumber(17);
		normalSpan.addNumber(9);
		normalSpan.addNumber(11);

		std::cout << normalSpan.shortestSpan() << std::endl;
		std::cout << normalSpan.longestSpan() << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------" << std::endl;

	Span tooMuch = Span(3);

	std::cout << "Trying to store too many elements:" << std::endl;
	try {

		tooMuch.addNumber(6);
		tooMuch.addNumber(3);
		tooMuch.addNumber(17);
		tooMuch.addNumber(9);

		std::cout << tooMuch.shortestSpan() << std::endl;
		std::cout << tooMuch.longestSpan() << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------" << std::endl;

	Span noSpan = Span(1);

	std::cout << "No span found:" << std::endl;
	try {
		noSpan.addNumber(10);
		std::cout << noSpan.shortestSpan() << std::endl;
	}
	catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------" << std::endl;

	Span two = Span(42420);

	std::cout << "Adding numbers with vector:" << std::endl;
	std::vector<int> v;
	for (int i = 0; i < 42420; i++) {
		v.push_back(i);
	}
	try {
	 	two.addNumber(v.begin(), v.end());
	 	std::cout << two.shortestSpan() << std::endl;
	 	std::cout << two.longestSpan() << std::endl;
	}
 	catch ( std::exception &e ) {
	 	std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------" << std::endl;

	return (0);
}
