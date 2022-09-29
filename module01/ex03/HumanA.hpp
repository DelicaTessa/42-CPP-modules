/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:31:53 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:39:22 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    
    private:
        std::string _name;
        Weapon &_weapon;
    
    public:
        HumanA( std::string name, Weapon &_weapon );
        
        void attack();

        ~HumanA();
};

#endif
