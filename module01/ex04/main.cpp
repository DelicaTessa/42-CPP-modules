/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 17:23:06 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:44:48 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av) {

    if (ac != 4) {

        std::cout << "Error: invalid number of arguments" << std::endl;
        return (1);
    }
    if (Sed::replace(av[1], av[2], av[3]))
        return (1);
    return (0);
}
