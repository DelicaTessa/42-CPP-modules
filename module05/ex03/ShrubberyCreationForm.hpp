/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 17:59:56 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 10:49:02 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class	ShrubberyCreationForm : public Form {

	private:
		std::string	_target;
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm& other );
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=( const ShrubberyCreationForm& b );

		void		action() const;
		static Form* create( const std::string& target );
};

#endif