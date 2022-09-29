/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/20 14:59:01 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/02 09:42:26 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void Contact::set_fname(std::string str) {
    
    this->_fname = str;
}

void Contact::set_lname( std::string str ) {

    this->_lname = str;
}

void Contact::set_nick( std::string str ) {

    this->_nick = str;
}

void Contact::set_phone( std::string str ) {

    this->_phone = str;
}

void Contact::set_secret( std::string str ) {

    this->_secret = str;
}

std::string Contact::get_fname() const {

    return this->_fname;
}

std::string Contact::get_lname() const {

    return this->_lname;
}

std::string Contact::get_nick() const {

    return this->_nick;
}

std::string Contact::get_phone() const {

    return this->_phone;
}

std::string Contact::get_secret() const {

    return this->_secret;
}

Contact::~Contact() {}
