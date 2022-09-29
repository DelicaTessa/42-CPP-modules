/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 14:07:06 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/29 09:57:51 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP 

#include <iostream>

class Brain {

    protected:
        std::string ideas[100];
    
    public:
        Brain();
        Brain( const Brain& other );
        Brain& operator=( const Brain& other );
        ~Brain();
};

#endif
