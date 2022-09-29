/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 10:59:27 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/08 11:23:16 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : _input(NULL) {}

Convert::Convert(const char *input) : _c(' '), _i(0), _f(0.0f), _d(0.0), _input(input) {}

Convert::Convert(const Convert& other) {
	
	*this = other;
}

Convert&	Convert::operator=(const Convert& other) {
	
	this->_c = other._c;
	this->_i = other._i;
	this->_f = other._f;
	this->_d = other._d;
	this->_input = other._input;

	return *this;
}

Convert::~Convert() {}

void	Convert::get_type() {

	if (is_c()){
		this->_c = this->_input[0];
		this->_i = static_cast<int>(this->_c);
		this->_f = static_cast<float>(this->_c);
		this->_d = static_cast<double>(this->_c);
	}
	else if (is_i()){
		this->_i = atoi(this->_input.c_str());
		this->_c = static_cast<char>(this->_i);
		this->_f = static_cast<float>(this->_i);
		this->_d = static_cast<double>(this->_i);
	}
	else if (is_f()){
		this->_f = atof(this->_input.c_str());
		this->_c = static_cast<char>(this->_f);
		this->_i = static_cast<int>(this->_f);
		this->_d = static_cast<double>(this->_f);
	}
	else if (is_d()){
		this->_d = atof(this->_input.c_str());
		this->_c = static_cast<char>(this->_d);
		this->_i = static_cast<int>(this->_d);
		this->_f = static_cast<float>(this->_d);
	}
	else
		throw NoConvertionException();
}

void	Convert::print_casts() {

	std::cout << "char: ";
	try {
		std::cout << get_c() << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << '\n';
	}
	std::cout << "int: ";
	try
	{
		std::cout << get_i() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "float: " << get_f() << std::endl;
	std::cout << "double: " << get_d() << std::endl;
}

bool	Convert::is_c(void) const{
	
	if (this->_input.size() == 1 && ((this->_input[0] >= ' ' && this->_input[0] < '0') 
		|| (this->_input[0] > '9' && this->_input[0] < 127)))
		return true;
	return false;
}

bool	Convert::is_i(void) const{
	int	j = 0;
	if (this->_input[j] == 0)
		return false;
	if (this->_input[j] == '-')
		j++;
	for (int i  = 0; this->_input[i + j] ; i++){
		if (this->_input[i + j] < '0' || this->_input[i] > '9')
			return false;
	}
	return true;
}

bool	Convert::is_f(void) const{
	int	j = 0;
	bool	dec_dot = false;
	if (this->_input == "nanf" || this->_input == "-inff" || this->_input == "+inff")
		return true;
	if (this->_input[j] == '-')
		j++;
	for (int i = 0 ; this->_input[i + j] ; i++){
		if (this->_input[i] == '.'){
			if (dec_dot == true)
				return false;
			dec_dot = true;
		}
		else if (this->_input[i] == 'f' && this->_input[i + 1] == '\0')
			break;
		else if (this->_input[i] < '0' || this->_input[i] > '9')
			return false;
	}
	if (dec_dot == false)
		return false;
	return true;
}

bool	Convert::is_d(void) const{
	int	j = 0;
	bool	dec_dot = false;
	if (this->_input == "nan" || this->_input == "-inf" || this->_input == "+inf")
		return true;
	if (this->_input[j] == '-')
		j++;
	for (int i = 0 ; this->_input[i + j] ; i++){
		if (this->_input[i] == '.'){
			if (dec_dot == true)
				return false;
			dec_dot = true;
		}
		else if (this->_input[i] < '0' || this->_input[i] > '9')
			return false;
	}
	if (dec_dot == false)
		return false;
	return true;

}

std::string	Convert::get_c(void) const{
	std::stringstream ss;

	if (this->_f != this->_f || this->_d != this->_d)
		throw ImposibleConvertionException();
	if (this->_c < ' ' || this->_c > '~')
		throw NonDisplayableException();
	ss << "'" << this->_c << "'";
	return ss.str();
}

std::string		Convert::get_i(void) const{
	std::stringstream ss;

	if (this->_f != this->_f || this->_d != this->_d)
		throw ImposibleConvertionException();
		ss << this->_i;
	return ss.str();
}

std::string		Convert::get_f(void) const{
	std::stringstream ss;
	ss << this->_f;
	if (static_cast<double>(this->_i) == this->_f)
		ss << ".0";
	ss << "f";
	return ss.str();
}

std::string		Convert::get_d(void) const{
	std::stringstream ss;
	ss << this->_d;
	if (static_cast<double>(this->_i) == this->_d)
		ss << ".0";
	return ss.str();
}
