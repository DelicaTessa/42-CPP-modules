/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/20 14:43:24 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/02 09:43:22 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "PhoneBook_utils.hpp"

PhoneBook::PhoneBook() {

    this->_index = 0;
    std::cout << "Welcome to this crappy phonebook. You can add up to 8 contacts with ADD,\nsearch for contacts with SEARCH and exit the phonebook with EXIT." << std::endl;
}

void    PhoneBook::add() {

    std::string input;
    std::string name;

    if (this->_index > 7) {

        std::cout << "Warning: data of contact ";
        std::cout << this->_contacts[_index % 8].get_fname();
        std::cout << " is going to be overwritten" << std::endl;
    }
    std::cout << "Enter first name:" << std::endl;
    std::cin >> input;
    this->_contacts[this->_index % 8].set_fname(input);
    std::cout << "Enter ";
    name = this->_contacts[this->_index % 8].get_fname();
    std::cout << name << "'s last name:" << std::endl;
    std::cin >> input;
    this->_contacts[this->_index % 8].set_lname(input);
    std::cout << "Enter " << name << "'s nickname:" << std::endl;
    std::cin >> input;
    this->_contacts[this->_index % 8].set_nick(input);
    std::cout << "Enter " << name << "'s phone number:" << std::endl;
    std::cin >> input;
    this->_contacts[this->_index % 8].set_phone(input);
    std::cout << "Enter " << name << "'s darkest secret:" << std::endl;
    std::cin >> input;
    this->_contacts[this->_index % 8].set_secret(input);
    std::cout << "Contact added" << std::endl;
    this->_index++;
}

void    PhoneBook::search() {

    std::string str;
    int i = 0;
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    while (i < 8) {

        std::cout << "|" << add_spaces(9) << i + 1;
        str = this->_contacts[i].get_fname();
        std::cout << "|" << add_spaces(10 - str.size()) << fix_width(str, 10);
        str = this->_contacts[i].get_lname();
        std::cout << "|" << add_spaces(10 - str.size()) << fix_width(str, 10);
        str = this->_contacts[i].get_nick();
        std::cout << "|" << add_spaces(10 - str.size()) << fix_width(str, 10);
        std::cout << "|" << std::endl;
        i++;
    }
    std::cout << " ------------------------------------------- " << std::endl;
    std::cout << "Enter index of entry you would like to display:" << std::endl;
    std::cin >> i;
    if (i < 1 || i > 8) {

        std::cout << "Error: index is out of range. You will return to main menu." << std::endl;
        return;
    }
    else if (!this->_contacts[i - 1].get_fname().size()) {

        std::cout << "Error: contact is empty. You will return to main menu." << std::endl;
        return;
    }
    else {
        
        std::cout << "Data for contact number: " << i << std::endl;
        std::cout << "First name: " << this->_contacts[i - 1].get_fname() << std::endl;
        std::cout << "Last name: " << this->_contacts[i - 1].get_lname() << std::endl;
        std::cout << "Nickname: " << this->_contacts[i - 1].get_nick() << std::endl;
        std::cout << "Phone Number: " << this->_contacts[i - 1].get_phone() << std::endl;
        std::cout << "Darkest secret: " << this->_contacts[i - 1].get_secret() << std::endl;
    }
}

PhoneBook::~PhoneBook() {
    
    std::cout << "You are now exiting the crappy phonebook. Bye!!" << std::endl;
}
