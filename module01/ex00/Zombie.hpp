/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 11:21:55 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:35:45 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

    public:
        Zombie( std::string name );
        void setName( std::string _name );
       
        void announce();
        ~Zombie();

    private:
        std::string name;
};

#endif