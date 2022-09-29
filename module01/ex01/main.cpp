/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 11:56:02 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:27:59 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main() {
    
    int size = 10;
    Zombie *horde = zombieHorde(size, "dragon");
    
    for (int i = 0; i < size; i++)
        horde[i].announce();

    delete[] horde;
    return (0);
}
