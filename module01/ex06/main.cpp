/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/31 11:20:58 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/05/31 11:23:05 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char**av)
{
    Harl karen;

    if (ac == 2)
        karen.complain(av[1]);
    else
        std::cout << "Error: enter correct log level." << std::endl;
    return (0);
}
