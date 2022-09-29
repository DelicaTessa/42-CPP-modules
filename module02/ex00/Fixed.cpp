/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/31 11:46:19 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:14:22 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {

    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& other ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=( const Fixed& other ) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits( int const raw ) {

	_value = raw;
}

Fixed::~Fixed() {
    
    std::cout << "Destructor called" << std::endl;
}
