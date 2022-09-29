/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 10:22:19 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/08 10:23:12 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<class T>
class	MutantStack : public std::stack<T> {

	public:
		MutantStack() : std::stack<T>() {}
		MutantStack( MutantStack<T> const & other) : std::stack<T>(other) {}
		~MutantStack() {}

		MutantStack<T>	&operator=( MutantStack<T> const & other) {

			this->c = other.c;

			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin() { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
};

#endif
