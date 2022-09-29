/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/20 14:50:13 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 12:28:33 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {

    PhoneBook crappy;
    std::string str;

    while(str != "EXIT") {

        std::cout << "Enter a command: ";
		std::cin >> str;
        if (str == "ADD")
            crappy.add();
        else if (str == "SEARCH")
            crappy.search();
        else if (str != "ADD" && str != "SEARCH" && str != "EXIT")
            std::cout << "Error: wrong command." << std::endl; 
    }
    return (0);
}
