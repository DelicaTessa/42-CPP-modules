/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 11:04:13 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/08 11:24:26 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <exception>
#include <sstream>
#include <cstdlib>


class Convert
{
		private:
			char		_c;
			int			_i;
			float		_f;
			double		_d;
			std::string	_input;
			Convert();
			
		public:
			class ImposibleConvertionException : public std::exception{
				virtual const char* what() const throw(){
					return "impossible";
				}
			};
			class NonDisplayableException : public std::exception{
				virtual const char* what() const throw(){
					return "Non displayable";
				}
			};
			class NoConvertionException : public std::exception{
				virtual const char* what() const throw(){
					return "No conversion.";
				}
			};
			Convert(const char *arg);
			Convert(const Convert& other);
			~Convert();
			Convert&	operator=(const Convert& other);
			void			get_type();
			void			print_casts();
			bool			is_c(void) const;
			bool			is_i(void) const;
			bool			is_f(void) const;
			bool			is_d(void) const;
			std::string		get_c(void) const;
			std::string		get_i(void) const;
			std::string		get_f(void) const;
			std::string		get_d(void) const;
};

#endif
