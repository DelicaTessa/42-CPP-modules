/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:41:14 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/29 10:13:54 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {

	//Animal *meta = new Animal();
	Animal *meow = new Cat();
	Animal *bark = new Dog();
    
    std::cout << meow->getType() << std::endl;
    std::cout << bark->getType() << std::endl;

    //meta->makeSound();
    meow->makeSound();
    bark->makeSound();

    Dog basic;
    Dog tmp = basic;

    delete meow;
    delete bark;

    return (0);
}
