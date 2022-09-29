/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 14:29:16 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 09:17:15 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {

	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExec;
		Form();

	public:
		Form( std::string const name, int const gradeToSign, int const gradeToExec );
		Form ( const Form& other );
		virtual ~Form();

		Form	&operator=( const Form& other );

		std::string	const	getName() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		bool				getSigned();
		void				beSigned( const Bureaucrat& bureaucrat);

		class GradeTooHighException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, Form& b);

#endif
