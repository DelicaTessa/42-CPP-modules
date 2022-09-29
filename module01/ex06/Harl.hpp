/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 19:35:22 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:51:27 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {

    private:
        void debug();
        void info();
        void warning();
        void error();
    
    public:
        Harl();
       
        void complain( std::string level );

        ~Harl();
};

#endif