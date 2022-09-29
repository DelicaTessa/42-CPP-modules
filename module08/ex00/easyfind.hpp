/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 08:56:41 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/08 09:31:26 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NotFound : public std::exception {
	
	public:
		char const	*what() const throw() {

			return "Int not found.";
		}
};

template<typename T>
typename T::iterator	easyfind( T container, int n) {

	typename T::iterator	it = std::find(container.begin(), container.end(), n);

	if (it == container.end()) {
		throw NotFound();
	}

	return it;
}

#endif
