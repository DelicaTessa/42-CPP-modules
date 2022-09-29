/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 11:43:26 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/02 09:53:13 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );

void    randomChump( std::string name ) ;

int main() {
    
    Zombie *x = newZombie("One");
    x->announce();

    randomChump("Two");
    
    delete x;
    
    return (0);
}
