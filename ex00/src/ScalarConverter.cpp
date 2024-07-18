/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:25:57 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/18 20:02:26 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter( const ScalarConverter &other )
{
	*this = other;
	std::cout << "Scalar Converter copied" << std::endl;
}

ScalarConverter &ScalarConverter::operator=( const ScalarConverter &other )
{
	std::cout << "assignment operator called" << std::endl;
	if (this != &other)
		*this = other;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Scalar Converter destructed" << std::endl;
}

void    ScalarConverter::convert( const std::string input )
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	if (isPseudoLiteral(input))
	{
		handlePseudoLiteral(input);
		return;
	}
	else if (isChar(input))
		convertFromChar(input);
	else if (isInt(input))
	{
		convertFromInt(input);
	}
	else if (isFloat(input))
		convertFromFloat(input);
	else if (isDouble(input))
		convertFromDouble(input);
	else 
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}
