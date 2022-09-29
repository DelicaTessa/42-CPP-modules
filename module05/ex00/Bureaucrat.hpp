/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 14:04:38 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/29 14:05:23 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class	Bureaucrat {

	class GradeTooHighException : public std::exception {

		public:
			virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception {

		public:
			virtual const char*	what() const throw();
	};

	private:
		std::string const	_name;
		int					_grade;
		Bureaucrat();

	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& other );
		~Bureaucrat();

		Bureaucrat& operator=( const Bureaucrat& other );

		std::string const	getName() const;
		int					getGrade() const;

		void				increment();
		void				decrement();
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b);

#endif
