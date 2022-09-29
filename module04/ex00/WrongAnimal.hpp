/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 13:44:07 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 14:03:28 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

    protected:
        std::string type;
    
    public:
        WrongAnimal();
        WrongAnimal( const WrongAnimal& other );
        WrongAnimal& operator=( const WrongAnimal& other );
        virtual ~WrongAnimal();

        void makeSound() const;
        std::string getType() const;
};

#endif
