/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:21:16 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/29 10:04:46 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

    protected:
        std::string type;
    
    public:
        Animal();
        Animal( const Animal& other );
        Animal& operator=( const Animal& other );
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
};

#endif
