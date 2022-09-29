/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:59:51 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 13:58:37 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal {

    public:
        Dog();
        Dog( const Dog& other );
        Dog& operator=( const Dog& other );
        ~Dog();
};

#endif
