/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 17:56:57 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 09:46:30 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form {

	private:
		std::string	_target;
		PresidentialPardonForm();

	public:
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & b );
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=( PresidentialPardonForm const & b );

		void	action() const;
};

#endif