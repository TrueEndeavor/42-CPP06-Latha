/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConverterHelper.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:57:36 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/18 20:28:00 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConverterHelper.hpp"

void handlePseudoLiteral(const std::string &input)
{
	std::cout << YELLOW << "char: impossible" << RESET << std::endl;
	std::cout << YELLOW << "int: impossible" << RESET << std::endl;

	if (input == "nan" || input == "nanf")
	{
		std::cout << YELLOW << "float: nanf" << RESET << std::endl;
		std::cout << YELLOW << "double: nan" << RESET << std::endl;
	}
	else if (input == "-inf" || input == "-inff") 
	{
		std::cout << YELLOW << "float: -inff" << RESET << std::endl;
		std::cout << YELLOW << "double: -inf" << RESET << std::endl;
	} 
	else if (input == "+inf" || input == "+inff" || input == "inf") 
	{
		std::cout << YELLOW << "float: inff" << RESET << std::endl;
		std::cout << YELLOW << "double: inf" << RESET << std::endl;
	}
}

void convertFromChar(const std::string &input)
{
	char c = input[0];
	std::cout << YELLOW << "char: " << c << RESET << std::endl;
	std::cout << YELLOW << "int: " << static_cast<int>(c) << RESET << std::endl;
	std::cout << YELLOW << "float: " << static_cast<float>(c) << ".0f" << RESET << std::endl;
	std::cout << YELLOW << "double: " << static_cast<double>(c) << ".0" << RESET << std::endl;
}

void convertFromInt(const std::string &literal)
{
	int i = toInt(literal);
	if (!canConvertToChar(literal))
	{
		std::cout << "char: impossible" << std::endl;
	}
	else
	{
		char c = static_cast<char>(i);
		if (isPrintable(c))
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void convertFromFloat(const std::string &literal)
{
	float f = toFloat(literal);
	if (!canConvertToChar(literal))
	{
			std::cout << "char: impossible" << std::endl;
	}
	else
	{
		char c = static_cast<char>(f);
		if (isPrintable(c))
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	}
	if (!canConvertToInt(literal))
	{
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	}
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void convertFromDouble(const std::string &literal)
{
	double d = toDouble(literal);
	if (!canConvertToChar(literal))
	{
		std::cout << "char: impossible" << std::endl;
	}
	else
	{
		char c = static_cast<char>(d);
		if (isPrintable(c))
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	}
	if (!canConvertToInt(literal))
	{
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	}
	if (!canConvertToFloat(literal))
	{
		std::cout << "float: impossible" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	}
	double dd;
	if ((d - static_cast<int>(d)) < 0.0) 
		dd = std::ceil(d - 0.5);
	else
	{
		std::cout << "hello" << std::endl;
		dd = std::floor(d + 0.5);
	}
	std::cout << "double: " << dd << std::endl;
    
}

