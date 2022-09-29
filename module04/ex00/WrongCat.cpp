/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 13:45:54 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 14:28:35 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {

    std::cout << "WrongCat default constructor called." << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& other ) {

    std::cout << "WrongCat copy constructor called." << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=( const WrongCat& other ) {

    std::cout << "WrongCat copy assignment operator called." << std::endl;
    this->type = other.type;
    return *this;
}

WrongCat::~WrongCat() {

    std::cout << "WrongCat destructor called." << std::endl;
}
