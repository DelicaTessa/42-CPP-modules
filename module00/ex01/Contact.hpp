/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/20 15:00:23 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/02 09:42:53 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP 
# define CONTACT_HPP    

#include <iostream>

class Contact {

    public:
        Contact();
       
        std::string get_fname() const;
        std::string get_lname() const;
        std::string get_nick() const;
        std::string get_phone() const;
        std::string get_secret() const;
        void        set_fname( std::string str );
        void        set_lname( std::string str );
        void        set_nick( std::string str );
        void        set_phone( std::string str );
        void        set_secret( std::string str );

        ~Contact();
    private:
        std::string _fname;
        std::string _lname;
        std::string _nick;
        std::string _phone;
        std::string _secret;
};

#endif