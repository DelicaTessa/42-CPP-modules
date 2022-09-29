/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 18:26:35 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 10:43:35 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern( const Intern& other ) {

	*this = other;
}

Intern& Intern::operator=(const Intern& other) {
	
	if (this != &other)
		return *this;
	return *this;
}

Intern::~Intern() {}

Form* Intern::makeForm( const std::string& name, const std::string& target ) {

	const std::string formName[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};

	Form* (*form[3])( const std::string& target ) = {
		&ShrubberyCreationForm::create,
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create
		};

		for (int i = 0; i < 3; ++i) {
			if (name == formName[i]) {
				std::cout << "Intern creates " << name << std::endl;
				return form[i](target);
			}
		}
	std::cout << "Form doesn't exist." << std::endl;
	return (NULL);
}
