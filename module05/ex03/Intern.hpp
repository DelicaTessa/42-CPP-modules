/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 18:20:58 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 10:42:33 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern {

	public:
		Intern();
		Intern( const Intern& other );
		Intern& operator=(const Intern& other);
		~Intern();

		Form* makeForm( const std::string& name, const std::string& target );

};

#endif