/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 09:46:26 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/14 11:19:29 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {

    ScavTrap a;
    ScavTrap b("Attacker");
    ScavTrap c("Soldier");
    ScavTrap d(c);
    
    a = b;

    b.attack("Dragon");
    b.attack("Dragon");
    b.attack("Dragon");

    b.takeDamage(30);
    b.beRepaired(25);

    b.attack("Dragon");
    b.attack("Dragon");

    b.takeDamage(25);
    b.attack("Dragon");

    b.beRepaired(25);
    b.attack("Dragon");

    b.attack("Dragon");
    b.attack("Dragon");
    b.guardGate();
    b.takeDamage(5);
    b.beRepaired(5);

    return (0);
}
