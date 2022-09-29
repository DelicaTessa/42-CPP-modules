/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/05 11:27:33 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/05 11:28:34 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

typedef struct {

	std::string	_name;
} Data;

uintptr_t	serialize( Data* ptr );
Data*		deserialize( uintptr_t raw );

#endif