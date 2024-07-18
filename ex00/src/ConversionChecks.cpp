/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionChecks.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:42:27 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/18 16:46:46 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionChecks.hpp"

// Check if the literal can be converted to a char
bool canConvertToChar(const std::string& literal) {
	if (isInt(literal)) {
		long value = std::strtol(literal.c_str(), NULL, 10);
		return value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max();
	} else if (isFloat(literal)) {
		float value = std::strtof(literal.c_str(), NULL);
		return value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max() && std::floor(value) == value;
	} else if (isDouble(literal)) {
		double value = std::strtod(literal.c_str(), NULL);
		return value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max() && std::floor(value) == value;
	}
	return false;
}

// Check if the literal can be converted to an int
bool canConvertToInt(const std::string& literal) {
	if (isFloat(literal))
	{
		float value = std::strtof(literal.c_str(), NULL);
		return value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max() && std::floor(value) == value;
	} else if (isDouble(literal)) {
		double value = std::strtod(literal.c_str(), NULL);
		return value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max() && std::floor(value) == value;
	}
	return false;
}

// Check if the literal can be converted to a float
bool canConvertToFloat(const std::string& literal) {
	if (isDouble(literal)) {
		double value = std::strtod(literal.c_str(), NULL);
		return value >= -std::numeric_limits<float>::max() && value <= std::numeric_limits<float>::max();
	}
	return false;
}

// Check if the literal can be converted to a double
bool canConvertToDouble(const std::string& literal){
	return isDouble(literal);
}