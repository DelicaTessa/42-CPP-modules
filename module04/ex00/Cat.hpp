/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:45:42 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 13:58:31 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal {

    public:
        Cat();
        Cat( const Cat& other );
        Cat& operator=( const Cat& other );
        ~Cat();
};

#endif
