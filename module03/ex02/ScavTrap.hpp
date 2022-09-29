/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 10:54:41 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/14 11:16:34 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	public:
		ScavTrap();
		ScavTrap( const std::string name );
		ScavTrap( const ScavTrap& other );
		~ScavTrap();
		ScavTrap& operator=( const ScavTrap& other );

		void	attack( const std::string& target );
		void	guardGate();
};

#endif