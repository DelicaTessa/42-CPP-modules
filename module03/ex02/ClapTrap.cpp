/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 09:15:02 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/14 11:16:50 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {

    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap: Default constructor called." << std::endl;
}

ClapTrap::ClapTrap( const std::string name ) {

    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap named " << name << " created." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {

    std::cout << "ClapTrap: Copy constructor called." << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other) {

    std::cout << "ClapTrap: Copy assignment operator called." << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
}

void ClapTrap::attack( const std::string& target ) {

    if (this->energyPoints >= 1 && this->hitPoints > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage \
        << " points of damage!" << std::endl;
        this->energyPoints--;
        return;
    }
    std::cout << "ClapTrap " << name << " doesn't have enough points for attack." << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {

    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage." << std::endl;
    this->hitPoints -= amount;
}

void ClapTrap::beRepaired( unsigned int amount ) {

    if (this->energyPoints >= 1) {
        std::cout << "ClapTrap " << name << " gets " << amount << " hitpoints back." << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
        return ;
    }
    std::cout << "ClapTrap " << name << " doesn't have enough points for repair." << std::endl;
}

ClapTrap::~ClapTrap() {

    std::cout << "ClapTrap: Destructor called." << std::endl;
}