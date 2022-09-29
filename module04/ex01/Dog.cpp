/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 11:02:03 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 14:27:43 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {

    std::cout << "Dog default constructor called." << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog( const Dog& other ) {

    std::cout << "Dog copy constructor called." << std::endl;
    this->_brain = new Brain();
    *this = other;
}

Dog& Dog::operator=( const Dog& other ) {

    std::cout << "Dog copy assignment operator called." << std::endl;
    this->type = other.type;
    *this->_brain = *other._brain;
    return *this;
}

Dog::~Dog() {

    std::cout << "Dog destructor called." << std::endl;
    delete this->_brain;
}
