/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 14:29:16 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 09:31:24 by tessaclemen   ########   odam.nl         */
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

		Form	&operator=( Form const & b );

		std::string	const	getName() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		bool				getSigned();
		void				beSigned( const Bureaucrat& bureaucrat);
		virtual void		execute( Bureaucrat const & executor ) const;
		virtual void		action() const = 0;

		class GradeTooHighException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};

		class FormNotSignedException : public std::exception {

			public:
				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Form& b);

#endif
