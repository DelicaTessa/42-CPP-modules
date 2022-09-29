/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 09:33:01 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/08 10:19:09 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class	Span {

	private:
		std::vector<int>	_arr;
		unsigned int		_N;
		Span();

	public:
		Span( unsigned int N );
		Span( Span const & other );
		~Span();

		Span	&operator=( Span const & other );

		void	addNumber( int n );
		void	addNumber( std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end );
		long unsigned int		shortestSpan();
		long unsigned int		longestSpan();

		class alreadyStored : public std::exception {
			
			public:
				char const	*what() const throw();
		};

		class noSpamFound: public std::exception {

			public:
				char const	*what() const throw();
		};
};

#endif
