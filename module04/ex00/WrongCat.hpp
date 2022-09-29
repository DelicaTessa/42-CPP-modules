/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 13:46:35 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/21 14:03:24 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {

    public:
        WrongCat();
        WrongCat( const WrongCat& other );
        WrongCat& operator=( const WrongCat& other );
        ~WrongCat();
};

#endif
