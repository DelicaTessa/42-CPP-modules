/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 11:55:33 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:31:35 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        
        horde[i].setName(name);
    }
    return (horde);
}
