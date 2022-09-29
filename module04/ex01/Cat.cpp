/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:45:06 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 14:27:35 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

    std::cout << "Cat default constructor called." << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat( const Cat& other ) {

    std::cout << "Cat copy constructor called." << std::endl;
    this->_brain = new Brain();
    *this = other;
}

Cat& Cat::operator=( const Cat& other ) {

    std::cout << "Cat copy assignment operator called." << std::endl;
    this->type = other.type;
    *this->_brain = *other._brain;
    return *this;
}

Cat::~Cat() {

    std::cout << "Cat destructor called." << std::endl;
    delete this->_brain;
}
