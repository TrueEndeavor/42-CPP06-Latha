/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:25:57 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/17 17:39:38 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

void    ScalarConverter::convert( std::string input )
{
	// detect the type of the literal passed as parameter
	//isChar?
	//isInt?
	//isFloat?
	//isDouble?

	//isSpecial?


	//is
	//conversion logic
	(void) input;
	std::cout << "Scalar Converter convert function" << std::endl;
	
}