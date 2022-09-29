/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 09:06:34 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/14 11:17:10 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

    protected:
        std::string name;
        int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    
    public:
        ClapTrap();
        ClapTrap( const std::string name );
        ClapTrap( const ClapTrap& other );
        ~ClapTrap();
        ClapTrap& operator=( const ClapTrap& other );

        void attack( const std::string& target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );
};

#endif