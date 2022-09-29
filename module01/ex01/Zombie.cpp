/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 11:27:49 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:36:11 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {

    this->setName(name);
    std::cout << "Zombie " << name << " created." << std::endl;
}

Zombie::Zombie() {

    this->setName("NULL");
    std::cout << "Zombie " << name << " created." << std::endl;
}

void    Zombie::announce() {

    std::cout << this->name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName( std::string name ) {

    this->name = name;
}

Zombie::~Zombie() {
    
    std::cout << "Zombie " << this->name << " destroyed." << std::endl;
}