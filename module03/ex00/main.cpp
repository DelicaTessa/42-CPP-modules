/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 09:46:26 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/14 10:06:59 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap a;
    ClapTrap b("Attacker");
    ClapTrap c("Soldier");
    ClapTrap d(c);
    
    a = b;

    b.attack("Dragon");
    b.attack("Dragon");
    b.attack("Dragon");

    b.takeDamage(5);
    b.beRepaired(5);

    b.attack("Dragon");
    b.attack("Dragon");

    b.takeDamage(10);
    b.attack("Dragon");

    b.beRepaired(10);
    b.attack("Dragon");

    b.attack("Dragon");
    b.attack("Dragon");
    b.takeDamage(5);
    b.beRepaired(5);

    return (0);
}
