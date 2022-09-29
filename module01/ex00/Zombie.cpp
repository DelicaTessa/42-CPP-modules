/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 11:27:49 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:35:38 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ){

    this->setName(name);
    std::cout << "Zombie " << name << " created." << std::endl;
}

void	Zombie::setName( std::string _name ) {

    this->name = _name;
}

void    Zombie::announce() {
    
    std::cout << this->name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    
    std::cout << "Zombie " << this->name << " destroyed." << std::endl;
}
