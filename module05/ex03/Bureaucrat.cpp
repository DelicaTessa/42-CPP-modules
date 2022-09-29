/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 17:43:33 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/30 18:12:49 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

	return;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {

	try {
		if (grade < 1) 
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (const Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) {

	*this = other;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other ) {

	_grade = other._grade;

	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string const	Bureaucrat::getName() const { 
	
	return this->_name;
}

int					Bureaucrat::getGrade() const { 
	
	return this->_grade; 
}

void				Bureaucrat::increment() {

	try {
		if (_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
		return;
	}
	this->_grade--;
}

void				Bureaucrat::decrement() {

	try {
		if (_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
		return;
	}
	this->_grade++;
}

void	Bureaucrat::signForm( Form& form ) {

	try {
		
		form.beSigned(*this);
		if (form.getSigned() == true)
			std::cout << this->_name << " signs " << form.getName() << std::endl;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
			std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
			return;
	}
}

void	Bureaucrat::executeForm( const Form& form ) {

	try {
		form.execute(*this);
		std::cout <<  this->_name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << this->_name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

char const	*Bureaucrat::GradeTooHighException::what() const throw() {

	return "grade too high";
}

char const	*Bureaucrat::GradeTooLowException::what() const throw() {

	return "grade too low";
}

std::ostream &operator<<( std::ostream &os, Bureaucrat const & b )
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();

	return os;
}
