/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 18:48:48 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:46:00 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <fstream>
#include <iostream>
#include <string>

class Sed {

    private:

    public:
        Sed();
        
        static int replace( std::string const &filename, char *search, char *replace );

        ~Sed();
};

#endif