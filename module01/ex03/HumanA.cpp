/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:34:17 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:35:20 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ): _name(name), _weapon(weapon) {

    std::cout << "HumanA named " << name << " created with weapon ";
    std::cout << _weapon.getType() << std::endl;
}

void    HumanA::attack() {

    std::cout << _name;
    std::cout << " attacks with their ";
    std::cout << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA() {
    
    std::cout << "HumanA named " << _name;
    std::cout << " destroyed" << std::endl;
}
