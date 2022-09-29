/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:59:51 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/29 10:06:24 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {

    private:
        Brain* _brain;

    public:
        Dog();
        Dog( const Dog& other );
        Dog& operator=( const Dog& other );
        virtual ~Dog();
};

#endif
