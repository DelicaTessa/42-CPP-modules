/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:41:14 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/29 10:00:48 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

    Animal *meta = new Animal();
    Animal *meow = new Cat();
    Animal *bark = new Dog();
    WrongAnimal *wrongAnimal = new WrongCat();
    

    std::cout << meta->getType() << std::endl;
    std::cout << meow->getType() << std::endl;
    std::cout << bark->getType() << std::endl;
    std::cout << wrongAnimal->getType() << std::endl;

    meta->makeSound();
    meow->makeSound();
    bark->makeSound();
    wrongAnimal->makeSound();

    delete meta;
    delete meow;
    delete bark;
    delete wrongAnimal;
    
    return (0);
}
