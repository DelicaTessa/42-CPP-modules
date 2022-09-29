/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 10:20:05 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/07 10:28:17 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	std::cout << "Empty array:" << std::endl;

	Array<int> a = Array<int>(8);
	for (unsigned int i = 0; i < a.size(); i++) {
		std::cout << a[i] << std::endl;
	}

	std::cout << "------------------------" << std::endl;

	Array<char> b = Array<char>(5);
	b[0] = 'H';
	b[1] = 'e';
	b[2] = 'l';
	b[3] = 'l';
	b[4] = 'o';

	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;

	std::cout << "------------------------" << std::endl;

	Array<char> c = Array<char>(b);

	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << std::endl;

	std::cout << "------------------------" << std::endl;

	Array<std::string> str1 = Array<std::string>();
	Array<std::string> str2 = Array<std::string>(5);
	str2[0] = "Henk";
	str2[1] = "likes";
	str2[2] = "dragons";
	str2[3] = "and";
	str2[4] = "pancakes";

	str1 = str2;
	for (int i = 0; i < 5; i++)
		std::cout << str1[i] << " ";
	std::cout << std::endl << "Size = " << str1.size() << std::endl;

	std::cout << "------------------------" << std::endl;

	try{
		a[80];
		b[80];
		c[80];
	}
	catch (std::exception & exception){
		std::cout << exception.what() << std::endl;
		return 0;
	}

	std::cout << "------------------------" << std::endl;

	return 0;
}
