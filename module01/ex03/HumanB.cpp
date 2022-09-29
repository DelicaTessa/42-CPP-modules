/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 16:42:58 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:46:34 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL) {

    std::cout << "HumanB named " << name << " created." << std::endl;
}

void    HumanB::setWeapon( Weapon &weapon ) {

    this->_weapon = &weapon;
}

void    HumanB::attack() {

    if (this->_weapon) {
        
        std::cout << _name;
        std::cout << " attacks with their ";
        std::cout << this->_weapon->getType() << std::endl;
        return;
    }
    std::cout << _name << " doesn't have a weapon" << std::endl;
}

HumanB::~HumanB() {
    
    std::cout << "HumanB named " << _name << " destroyed." << std::endl;
}
