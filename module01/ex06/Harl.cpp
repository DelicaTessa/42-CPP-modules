/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 19:37:49 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:50:34 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

void Harl::debug() {

	std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info() {

	std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning() {

	std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error() {

	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

static const std::string	levels[] = {

	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

static int	getLogLevel( std::string level ) {

	int	i = 0;
	while (i < 4) {

		if (level == levels[i]) 
			return (i);
		i++;
	}
	return (i);
}

void	Harl::complain( std::string level ) {

	switch (getLogLevel(level)) {
		
		case (0):
			debug();
			info();
			warning();
			error();
			break;
		case (1):
			info();
			warning();
			error();
			break;
		case (2):
			warning();
			error();
			break;
		case (3):
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

Harl::~Harl() {}
