/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/20 14:02:32 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/02 09:42:06 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {

        for (int x = 1; x < ac; x++) {
            
            for (int y = 0; y < strlen(av[x]); y++)
                std::cout << (char)(std::toupper(av[x][y]));
        }
        std::cout << std::endl;
    }
    return (0);
}
