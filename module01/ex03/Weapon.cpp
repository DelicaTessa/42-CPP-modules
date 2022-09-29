/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:22:24 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/02 09:59:22 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ): _type(type) {}

void    Weapon::setType( std::string type ) {

    this->_type = type;
}

const std::string& Weapon::getType() const {

    return (this->_type);
}

Weapon::~Weapon() {}
