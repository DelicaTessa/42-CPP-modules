/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/02 10:56:02 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/02 14:18:45 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class	Fixed {

	private:
		int					_fixPointNum;
		static const int	_fractBits = 8;

	public:
		Fixed();
		Fixed( const int num );
		Fixed( const float num );
		Fixed( const Fixed& other );
		~Fixed();
		Fixed&	operator=( const Fixed& other );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixPointNum);