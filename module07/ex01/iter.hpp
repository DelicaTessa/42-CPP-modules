/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 08:57:23 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/07 09:49:45 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T *arr, size_t n, void f(T const & x)) {

	for (size_t i = 0; i < n; i++) {
		f(arr[i]);
	}
}

#endif
