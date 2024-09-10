/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:43:02 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/19 14:52:01 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

bool	isPseudoLiteral( std::string input )
{
	return (input == "nan" || input == "nanf" || \
		input == "inf" || input == "inff" || \
		input == "+inf" || input == "+inff" || \
		input == "-inf" || input == "-inff");
}

bool	isChar( const std::string &input )
{
	return (input.size() == 1 && std::isprint(input[0]) && \
		!isdigit(input[0]));
}

bool isInt(const std::string &input)
{
	if (!isNumeric(input, "int"))
		return (false);
	try
	{
		long value = toInt(input);
		if (value < std::numeric_limits<int>::min() || \
			value > std::numeric_limits<int>::max()) 
			{
			
			return false;
			}
	}
	catch (const std::out_of_range&)
	{
		return false;
	}
		catch (const std::invalid_argument&)
	{
		return false;
	}
	return true;
}

bool isFloat(const std::string &input)
{
	if (!isNumeric(input, "float"))
		return (false);
	try
	{
		long value = toFloat(input);
		if (value < std::numeric_limits<float>::min() || \
			value > std::numeric_limits<float>::max())
			return false;
	}
	catch (const std::out_of_range&)
	{
		return false;
	}
		catch (const std::invalid_argument&)
	{
		return false;
	}
	return true;
}
bool isDouble(const std::string &input)
{
	if (!isNumeric(input, "double"))
		return (false);
	try
	{
		long value = toDouble(input);
		if (value < std::numeric_limits<double>::min() || \
			value > std::numeric_limits<double>::max())
			return false;
	}
	catch (const std::out_of_range&)
	{
		return false;
	}
		catch (const std::invalid_argument&)
	{
		return false;
	}
	return true;
}

bool isPrintable(char c)
{
	return std::isprint(static_cast<unsigned char>(c));
}

bool isNumeric(const std::string &input, std::string scalarType)
{
	bool validity;
	bool decimal_point_found;
	size_t start = 0;

	validity = true;
	if (input.empty())
	{
		return false;
	}
	if (input[0] == '-' || input[0] == '+')
	{
		if (input.length() == 1) // If it is a single char of sign, it is not valid number
			return false;
		start = 1;
	}
	decimal_point_found = false;
	for (size_t i = start; i < input.length(); i++)
	{
			if (input[i] == '.')
			{
				if (decimal_point_found)
					return false; // More than one decimal point is not valid
				decimal_point_found = true;
				if (scalarType == "int")
						validity = false;
			}
			else if (!std::isdigit(input[i]))
			{
				return false;
			}
	}
	return (true & validity);
}

// Conversion functions
char toChar(const std::string& literal) {
	return literal[0];
}

int toInt(const std::string& literal)
{
	return std::atoi(literal.c_str());
}

float toFloat(const std::string& literal) {
	return std::strtof(literal.c_str(), NULL);
}

double toDouble(const std::string& literal) {
	return std::strtod(literal.c_str(), NULL);
}
