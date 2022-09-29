/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:45:42 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 14:55:06 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {

    private:
        Brain* _brain;

    public:
        Cat();
        Cat( const Cat& other );
        Cat& operator=( const Cat& other );
        virtual ~Cat();

        void makeSound() const;
};

#endif
