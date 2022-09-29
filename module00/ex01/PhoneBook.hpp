/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/20 14:46:53 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/02 09:43:27 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H    

#include "Contact.hpp"
#include <iostream>

class PhoneBook {

    public:
        PhoneBook();
       
        void    add();
        void    search();

        ~PhoneBook();
    private:
        Contact _contacts[8];
        int     _index;
};

#endif