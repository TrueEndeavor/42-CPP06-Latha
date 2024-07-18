/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:26:13 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/18 20:17:28 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <string>
# include <iostream>
# include <limits>
# include <cmath>
#include <iomanip>
# include <cstdlib>

#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define GREY "\033[0;90m"
#define RESET "\033[0m"

bool	isPseudoLiteral( std::string input );
bool	isPrintable(char c);
bool	isNumeric(const std::string &input);

bool	isChar(const std::string &literal);
bool	isInt(const std::string &literal);
bool	isFloat(const std::string &literal);
bool	isDouble(const std::string &literal);

char	toChar(const std::string& literal);
int		toInt(const std::string& literal);
float	toFloat(const std::string& literal);
double	toDouble(const std::string& literal);

#endif