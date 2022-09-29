/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 12:24:30 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:36:29 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of the string:" << std::endl;
    std::cout << &str << std::endl;
    std::cout << "Memory address held by the stringPTR:" << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << "Memory address held by the stringREF:" << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << "Value of the string:" << std::endl;
    std::cout << str << std::endl;
    std::cout << "Value pointed to by stringPTR:" << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF:" << std::endl;
    std::cout << stringREF << std::endl;

    return (0);
}
