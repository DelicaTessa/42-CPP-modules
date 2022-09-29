/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/29 14:41:13 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/01 09:29:12 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {

	try {

		Bureaucrat	bureaucrat( "Henk", 13 );
		Form		form( "FormOkay", 21, 126 ); // signs without a problem because grade of Henk is higher
		//Form		form( "ProblematicGrade", 10, 15 ); // Henk cannot sign it cause his grade is too low
		//bureaucrat.increment(); // incrementing Henk's grade 3 times so he is able to sign it
		//bureaucrat.increment();
		//bureaucrat.increment();
		//bureaucrat.signForm(form);
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl; 
	}
	return (0);
}
