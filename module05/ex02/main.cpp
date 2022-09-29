/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 17:56:09 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 09:56:06 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {

	Bureaucrat	a( "Henk", 10 );
	Bureaucrat	b( "Dirk", 1 );

	ShrubberyCreationForm	shrubberyForm("28A"); // 145 to sign and 137 to exec
	RobotomyRequestForm		robotomyForm("17B"); // 72 to sign and 45 to exec
	PresidentialPardonForm	presidentialForm("32C"); // 25 to sign and 5 to exec

	a.signForm(shrubberyForm);
	a.executeForm(shrubberyForm);
	a.executeForm(robotomyForm);
	a.signForm(robotomyForm);
	a.executeForm(robotomyForm);
	a.signForm(presidentialForm);
	a.executeForm(presidentialForm);
	b.signForm(presidentialForm);
	b.executeForm(presidentialForm);

	return (0);
}
