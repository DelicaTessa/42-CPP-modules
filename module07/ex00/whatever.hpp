/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 08:58:23 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/07 09:29:15 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a , T &b) {

	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T		min(T const &a, T const &b) {

	return (a < b) ? a : b;
}

template<typename T>
T		max(T const &a, T const &b) {

	return (a > b) ? a : b;
}

#endif
