/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:41:14 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 14:32:11 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;

    const Animal *Animals[4];

    for (int i = 0; i < 4; i++) {

	    if (i % 2) {
			Animals[i] = new Dog();
		}
		else {
			Animals[i] = new Cat();
		}
	}

	for (int i = 0; i < 4; i++) {

		delete Animals[i];
	}

    Dog basic;
    Dog tmp = basic;
    
    return (0);
}
