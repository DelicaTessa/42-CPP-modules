/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 17:56:35 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 10:07:41 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target() {}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other ) : Form(other) {

	this->_target = other._target;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( const PresidentialPardonForm& other ) {

	Form::operator=(other);
	this->_target = other._target;

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::action() const {
		
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
