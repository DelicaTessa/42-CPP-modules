/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 17:59:38 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 10:48:55 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target() {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other ) : Form(other) {

	this->_target = other._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other ) {

	Form::operator=(other);
	this->_target = other._target;

	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::action() const {

	std::ofstream	file(this->_target + "_shrubbery");

	file << "ASCII trees" << std::endl;
	file.close();
}

Form* ShrubberyCreationForm::create( const std::string& target ) {

	return new ShrubberyCreationForm(target);
}
