/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 16:42:14 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:39:14 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

    private:
        std::string _name;
        Weapon *_weapon;
    
    public:
        HumanB( std::string name );
        
        void setWeapon( Weapon &weapon );
        void attack();

        ~HumanB();
};

#endif