/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 14:28:30 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/30 18:14:03 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(), _signed(false), _gradeToSign(), _gradeToExec()  {}

Form::Form( std::string const name, int const gradeToSign, int const gradeToExec ) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {

	try {
		if (_gradeToExec < 1 || _gradeToSign < 1) 
			throw Form::GradeTooHighException();
		else if (_gradeToExec > 150 || _gradeToExec > 150)
		throw Form::GradeTooLowException();
	}
	catch (const Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form( const Form& other )  : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {}

Form::~Form() {}

Form& Form::operator=( const Form& other ) {

	this->_signed = other._signed;

	return *this;
}

std::string	const	Form::getName() const { 
	
	return this->_name; 
}

int					Form::getGradeToSign() const { 
	
	return this->_gradeToSign; 
}

int					Form::getGradeToExec() const { 
	
	return this->_gradeToExec; 
}

bool				Form::getSigned() { 
	
	return this->_signed; 
}

void	Form::beSigned( const Bureaucrat& bureaucrat ) {

	try {
		if (getGradeToSign() < bureaucrat.getGrade() )
			throw Form::GradeTooLowException();
	}
	catch (const GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
		return;
	}
	if (this->getGradeToSign() >= bureaucrat.getGrade())
	{
		this->_signed = true;
	}
}

void	Form::execute( const Bureaucrat& executor ) const {

	if (this->_signed != true) {
		throw Form::FormNotSignedException();
	}
	if (executor.getGrade() > this->_gradeToExec) {
		throw Form::GradeTooLowException();
	}
	action();
}

char const	*Form::GradeTooHighException::what() const throw() {

	return "grade too high";
}

char const	*Form::GradeTooLowException::what() const throw() {

	return "grade too low";
}

char const	*Form::FormNotSignedException::what() const throw() {

	return "form not signed";
}

std::ostream &operator<<( std::ostream& os, Form& b )
{
	os << b.getName() << ", bureaucrat grade";

	return os;
}
