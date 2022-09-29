/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:19:05 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/02 09:59:31 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

    private:
        std::string _type;
    
    public:
        Weapon( std::string type );
       
        void setType( std::string type );
        const std::string& getType() const ;

        ~Weapon();
};

#endif
