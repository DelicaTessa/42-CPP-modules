/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook_utils.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/28 12:47:14 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 12:29:06 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_utils.hpp"

std::string	add_spaces( int n ) {

	std::string	str;

	while (n > 0) {

		str.append(" ");
        n--;
    }
	return (str);
}

std::string	fix_width( std::string str, long unsigned max ) {

	if (str.size() > max) {
		
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}
