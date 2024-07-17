/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:03:11 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/17 18:52:52 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "ScalarConverter.hpp"
#include "Utils.hpp"

int	main(int ac, char **av)
{
	std::string input;

	if (ac > 2)
		std::cout << RED << "Invalid arguments" << RESET << std::endl;
	if (!av[1])
		std::cout << RED << "Invalid (NULL) input" << RESET << std::endl;
	else
	{
		input = av[1];
		if (isPseudoLiteral(input))
		{
			std::cout << "Invalid (pseudo literal) input" << std::endl;
		}
		if (isEmpty(input))
		{
			//displayDefault();//empty is a valid string
			std::cout << "Invalid (empty) input" << std::endl;
		}
		if (!isNumber(input))
		{
			// possibility of having . for float and double and f
			std::cout << "Invalid (non number) input" << std::endl;
		}
		else
		{
			//intrange - check range
			std::cout << "Is an int" << std::endl;
		}
		//float range
		//double range
	}


	/* if (argc > 2)
		std::cout << RED << "You can only convert ONE string at time\n" << RESET;
	else if (!argv[1])
		std::cout << RED << "Cannot convert an NULL string.\n" << RESET;
	//else if (isEmpty( argv[1] ))
	//	std::cout << RED << "Cannot convert an EMPTY string.\n" << RESET;
	else
	{
		//std::string str( strWithoutWhitespace( argv[1] ) );
		std::string str = "Hello";
		ScalarConverter::convert( str );
	} */
	return 0;
}
