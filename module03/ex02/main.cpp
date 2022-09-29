/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 09:46:26 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/14 11:31:50 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {

    FragTrap a;
    FragTrap b("Attacker");
    FragTrap c("Soldier");
    FragTrap d(c);
    
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
    b.highFivesGuys();
    b.takeDamage(5);
    b.beRepaired(5);

    return (0);
}
