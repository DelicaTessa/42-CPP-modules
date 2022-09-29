/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 09:32:37 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/08 10:04:43 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N() {}

Span::Span( unsigned int N ) : _N(N) {}

Span::Span( Span const & other ) {

	_arr = other._arr;
	_N = other._N;
}

Span::~Span() {}

Span	&Span::operator=( Span const & other ) {

	if (this != &other) {
		_arr = other._arr;
		_N = other._N;
	}
	return *this;
}

void	Span::addNumber( int n ) {

	if (_arr.size() == _N) {
		throw Span::alreadyStored();
	}
	_arr.push_back(n);
}

void	Span::addNumber( std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end ) {

	for (std::vector<int>::iterator it = begin; it != end; it++) {
		if (_arr.size() == _N) {
			throw Span::alreadyStored();
		}
		_arr.push_back(*it);
	}
}

long unsigned int		Span::shortestSpan(void){
	if (this->_arr.size() < 2)
		throw Span::noSpamFound();
	std::sort(this->_arr.begin(), this->_arr.end());
	int range = this->_arr[1] - this->_arr[0];
	for (unsigned long i = 0 ; i < this->_arr.size() - 1 ; i++ ){
		if (this->_arr[i + 1] - this->_arr[i] < range)
			range = this->_arr[i + 1] - this->_arr[i];
	}
	return range;
}

long unsigned int		Span::longestSpan(void){
	if (this->_arr.size() < 2)
		throw Span::noSpamFound();
	long	min = *min_element(_arr.begin(), _arr.end());
	long	max = *max_element(_arr.begin(), _arr.end());
	long long span;
	span = max - min;
	span = abs(span);
	return (span);
}

char const	*Span::alreadyStored::what() const throw() {

	return "N elements already stored.";
}

char const	*Span::noSpamFound::what() const throw() {

	return "No span can be found.";
}
