/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 19:35:22 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:48:55 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {

    private:
        void debug ( void );
        void info ( void );
        void warning ( void );
        void error ( void );
    
    public:
        Harl(void);
        
        void complain(std::string level);

        ~Harl(void);

};

#endif