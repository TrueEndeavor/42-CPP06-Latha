/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:26:13 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/18 14:43:20 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include "ConverterHelper.hpp"
#include "ConversionChecks.hpp"
#include "Utils.hpp"

#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define GREY "\033[0;90m"
#define RESET "\033[0m"

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter( const ScalarConverter &other);
		ScalarConverter &operator=( const ScalarConverter &other);
	
	public:
		~ScalarConverter();
		static void		convert( std::string input);
};

#endif