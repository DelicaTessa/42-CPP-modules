/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 11:21:55 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:39:33 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
    
    public:
        Zombie( std::string name );
        Zombie();
        
        void announce();
        void setName(std::string name);

        ~Zombie();

    private:
        std::string name;
};

#endif