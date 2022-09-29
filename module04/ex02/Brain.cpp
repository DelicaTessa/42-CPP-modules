/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 14:06:58 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 14:27:24 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain( const Brain& other ) {

    std::cout << "Brain copy constructor called." << std::endl;
    *this = other;
}

Brain& Brain::operator=( const Brain& other ) {

    std::cout << "Brain copy assignment operator called." << std::endl;
    for (int i = 0; i < 100; i++) {

        this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain() {

    std::cout << "Brain destructor called." << std::endl;
}
