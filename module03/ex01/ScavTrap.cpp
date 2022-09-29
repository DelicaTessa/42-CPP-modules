/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 10:54:34 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/14 11:15:35 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
    std::cout << "ScavTrap: default constructor called." << std::endl;
}

ScavTrap::ScavTrap( const std::string name ) {

	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
    std::cout << "ScavTrap named " << name << " created." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ) {

	std::cout << "ScavTrap: Copy constructor called." << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other ) {

	ClapTrap::operator=(other);
	return *this;
}

void	ScavTrap::attack( const std::string& target ) {

	std::cout << "ScavTrap: " << this->name << " attacks " << target <<", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	
	std::cout << "ScavTrap: guardGate has been called." << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap: Destructor called." << std::endl;
}
