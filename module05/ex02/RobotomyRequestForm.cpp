/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 17:58:01 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/30 18:07:55 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target() {}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other) : Form(other) {

	this->_target = other._target;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm& other) {

	Form::operator=(other);
	this->_target = other._target;

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::action() const {

	std::cout << "Some drilling noises..." << std::endl;
	std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
}
