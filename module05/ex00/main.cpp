/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 14:06:00 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 09:10:27 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

    Bureaucrat a = Bureaucrat("Henk", 85);
    std::cout << a << std::endl;
	std::cout << std::endl;
    
	std::cout << "Example of range too high:" << std::endl;
    Bureaucrat HighRange("HighRange", 0);
	std::cout << std::endl;

	std::cout << "Example of range too low:" << std::endl;
	Bureaucrat LowRange("LowRange", 220);
	std::cout << std::endl;

	std::cout << "Example of incrementing and decrementing in normal range:" << std::endl;
	Bureaucrat NormalRange("NormalRange", 100);
	std::cout << NormalRange << std::endl;
	NormalRange.increment();
	std::cout << NormalRange << std::endl;
	NormalRange.decrement();
	std::cout << NormalRange << std::endl;
	std::cout << std::endl;

	std::cout << "Example of incrementing too high:" << std::endl;
	Bureaucrat Incrementus("Incrementus" , 1);
	std::cout << Incrementus << std::endl;
	Incrementus.increment();
	std::cout << Incrementus << std::endl;
	std::cout << std::endl;

	std::cout << "Example of decrementing too low:" << std::endl;
	Bureaucrat Decrementus("Decrementus" , 150);
	std::cout << Decrementus << std::endl;
	Decrementus.decrement();
	std::cout << Decrementus << std::endl;

    return (0);
}
