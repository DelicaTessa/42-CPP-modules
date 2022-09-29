/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 14:27:45 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/30 18:13:26 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class	Bureaucrat {

	private:
		std::string const	_name;
		int					_grade;
		Bureaucrat();

	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& other );
		~Bureaucrat();

		Bureaucrat	&operator=( const Bureaucrat& other );

		std::string	const	getName() const;
		int					getGrade() const;
		void				increment();
		void				decrement();
		void				signForm( Form& form );
		void				executeForm( const Form& form );

		class GradeTooHighException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat& b);

#endif
