/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 11:23:35 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/14 11:25:40 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

	public:
		FragTrap();
		FragTrap( const std::string name );
		FragTrap( const FragTrap& other );
		FragTrap& operator=( const FragTrap& other );
        ~FragTrap();

		void	highFivesGuys();
};

#endif