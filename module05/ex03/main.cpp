/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 18:19:32 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 10:28:09 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main() {

	Intern	Henk;

	Form	*a = Henk.makeForm("ShrubberyCreationForm", "28A");
	Form	*b = Henk.makeForm("RobotomyRequestForm", "17B");
	Form	*c = Henk.makeForm("PresidentialPardonForm", "35C");
	Form	*d = Henk.makeForm("invalidForm", "0000");

	delete a;
	delete b;
	delete c;
	
	return (0);
}
