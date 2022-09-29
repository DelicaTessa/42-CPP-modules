/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:22:13 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 14:59:26 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {

    std::cout << "Animal default constructor called." << std::endl;
    this->type = "Animal";
}

Animal::Animal( const Animal& other ) {

    std::cout << "Animal copy constructor called." << std::endl;
    *this = other;
}

Animal& Animal::operator=( const Animal& other ) {

    std::cout << "Animal copy assignment operator called." << std::endl;
    this->type = other.type;
    return *this;
}

Animal::~Animal() {

    std::cout << "Animal destructor called." << std::endl;
}

std::string Animal::getType() const { 

    return this->type;
}
