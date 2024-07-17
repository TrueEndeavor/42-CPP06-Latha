/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:43:02 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/17 19:01:51 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

bool	isEmpty( std::string input )
{
	if (input.empty())
		return (true);
	else
		return (false);
}

bool	isNumber( std::string input )
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (!(isdigit(input[i])))
			return (false);
	}
	return (true);
}

bool	isPseudoLiteral( std::string input )
{
	if (input == "nan" || input == "nanf" || \
		input == "inf" || input == "inff" || \
		input == "+inf" || input == "+inff" || \
		input == "-inf" || input == "-inff")
		return (true);
	return (false);
}

bool	isChar( std::string input )
{
	if (input.size() == 1 && std::isprint(input[0]) && !isdigit(input[0]))
	{
		return (true);
	}
	return (false);
} 

bool	isInt( std::string input )
{
	if (isNumber)
	{
		// check for range input.
	}
	return (true);
} 