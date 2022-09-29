/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 13:45:11 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 14:02:53 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

    std::cout << "WrongAnimal default constructor called." << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {

    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {

    std::cout << "WrongAnimal copy assignment operator called." << std::endl;
    this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {

    std::cout << "WrongAnimal destructor called." << std::endl;
}

void WrongAnimal::makeSound() const {

    std::cout << "I am " << this->type << std::endl;
}

std::string WrongAnimal::getType() const { 

    return this->type;
}