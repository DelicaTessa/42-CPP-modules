/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/02 11:01:01 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/02 14:19:28 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class	Fixed {

	private:
		int					_fixPointNum;
		static const int	_fractBits = 8;

	public:
		Fixed( void );
		Fixed( int const num );
		Fixed( float const num );
		Fixed( Fixed const &b );
		~Fixed();

		Fixed	&operator=( Fixed const &b );
		bool	operator>( Fixed const &b );
		bool	operator<( Fixed const &b );
		bool	operator>=( Fixed const &b );
		bool	operator<=( Fixed const &b );
		bool	operator==( Fixed const &b );
		bool	operator!=( Fixed const &b );
		Fixed	operator+( Fixed const &b );
		Fixed	operator-( Fixed const &b );
		Fixed	operator*( Fixed const &b );
		Fixed	operator/( Fixed const &b );
		Fixed	&operator++( void );
		Fixed	&operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

		static Fixed		&min( Fixed &a, Fixed &b );
		static Fixed		&max( Fixed &a, Fixed &b );
		static Fixed const	&min( Fixed const &a, Fixed const &b );
		static Fixed const	&max( Fixed const &a, Fixed const &b );
};

std::ostream	&operator<<( std::ostream &os, Fixed const &b );
