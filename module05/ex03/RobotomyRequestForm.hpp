/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/30 17:58:25 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 10:48:50 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class	RobotomyRequestForm : public Form {

	private:
		std::string	_target;
		RobotomyRequestForm();

	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm& other );
		~RobotomyRequestForm();

		RobotomyRequestForm	&operator=( const RobotomyRequestForm& other );

		void	action() const;
		static Form* create( const std::string& target );
};

#endif
