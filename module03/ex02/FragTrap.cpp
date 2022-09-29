/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 11:23:06 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/14 11:30:52 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {

	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
    std::cout << "FragTrap: Default constructor called." << std::endl;
}

FragTrap::FragTrap( const std::string name ) {

	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
    std::cout << "FragTrap named " << name << " created." << std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) {

	std::cout << "FragTrap: Copy constructor called." << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=( const FragTrap& other ) {

	ClapTrap::operator=(other);
	return *this;
}

void	FragTrap::highFivesGuys() {

	std::cout << "FragTrap: HIGH FIVE!!" << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap: Destructor called." << std::endl;
}
