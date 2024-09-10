/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConverterHelper.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:57:36 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/19 14:52:30 by lannur-s         ###   ########.fr       */
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
	std::cout << YELLOW << "char: " << static_cast<char>(c) << RESET << std::endl;
	std::cout << YELLOW << "int: " << static_cast<int>(c) << RESET << std::endl;
	std::cout << YELLOW << "float: " << static_cast<float>(c) << ".0f" << RESET << std::endl;
	std::cout << YELLOW << "double: " << static_cast<double>(c) << ".0" << RESET << std::endl;
}

void convertFromInt(const std::string &literal)
{
	int i = toInt(literal);
	if (!canConvertToChar(literal))
	{
		std::cout << YELLOW << "char: impossible" << RESET << std::endl;
	}
	else
	{
		char c = static_cast<char>(i);
		if (isPrintable(c))
			std::cout << YELLOW << "char: " << c << RESET << std::endl;
		else
			std::cout << YELLOW << "char: " << "Non displayable" << RESET << std::endl;
	}
	std::cout << YELLOW << "int: " << i << std::endl;
	std::cout << YELLOW << "float: " << static_cast<float>(i) << "f" << RESET << std::endl;
	std::cout << YELLOW << "double: " << static_cast<double>(i) << RESET << std::endl;
}

void convertFromFloat(const std::string &literal)
{
	float f = toFloat(literal);
	if (!canConvertToChar(literal))
	{
			std::cout << YELLOW << "char: impossible" << RESET << std::endl;
	}
	else
	{
		char c = static_cast<char>(f);
		if (isPrintable(c))
			std::cout << YELLOW << "char: " << c << RESET << std::endl;
		else
			std::cout << YELLOW << "char: " << "Non displayable" << RESET << std::endl;
	}
	if (!canConvertToInt(literal))
	{
		std::cout << YELLOW << "int: impossible" << RESET << std::endl;
	}
	else
	{
		std::cout << YELLOW << "int: " << static_cast<int>(f) << RESET << std::endl;
	}
	std::cout << YELLOW << "float: " << f << "f" << RESET << std::endl;
	std::cout << YELLOW << "double: " << static_cast<float>(f) << RESET << std::endl;
}

void convertFromDouble(const std::string &literal)
{
	double d = toDouble(literal);
	if (!canConvertToChar(literal))
	{
		std::cout << YELLOW << "char: impossible" << RESET << std::endl;
	}
	else
	{
		char c = static_cast<char>(d);
		if (isPrintable(c))
			std::cout << YELLOW << "char: " << static_cast<char>(c) << RESET << std::endl;
		else
			std::cout << YELLOW << "char: " << "Non displayable" << RESET << std::endl;
	}
	if (!canConvertToInt(literal))
	{
		std::cout << YELLOW << "int: impossible" << RESET << std::endl;
	}
	else
	{
		std::cout << YELLOW << "int: " << static_cast<int>(d) << RESET << std::endl;
	}
	if (!canConvertToFloat(literal))
	{
		std::cout << YELLOW << "float: impossible" << RESET << std::endl;
	}
	else
	{
		std::cout << YELLOW << "float: " << static_cast<float>(d) << "f" << RESET << std::endl;
	}
	std::cout << YELLOW << "double: " << d << RESET << std::endl;
    
}

