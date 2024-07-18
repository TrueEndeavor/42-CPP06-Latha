/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:03:11 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/18 19:33:04 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "ScalarConverter.hpp"
#include "Utils.hpp"

int	main(int ac, char **av)
{
	std::string input;
	if (ac != 2)
	{
		std::cerr << RED << "Usage: " << av[0] << " <value_to_convert>" << std::endl;
		return (1);
	}
	if (!av[1])
		std::cout << RED << "Invalid (NULL) input" << RESET << std::endl;
	else
	{
		input = av[1];
		ScalarConverter::convert(input);
	}
	return (0);
}

