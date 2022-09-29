/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/05 10:44:34 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/08 11:17:14 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av) 
{
	if (ac != 2) {
		std::cerr << "Invalid number of arguments!" << std::endl;
		return (1);
	}
	Convert convert(av[1]);
	try
	{
		convert.get_type();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
		return 1;
	}
	convert.print_casts();
	return 0;
}
