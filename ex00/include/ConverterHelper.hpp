/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConverterHelper.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:43:22 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/18 19:37:19 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTERHELPER_HPP
# define CONVERTERHELPER_HPP

# include <string>
# include <iostream>
# include <cmath>
# include "ConversionChecks.hpp"
# include "Utils.hpp"

void	handlePseudoLiteral(const std::string &input);

void	convertFromChar(const std::string &input);
void	convertFromInt(const std::string &input);
void	convertFromFloat(const std::string &input);
void	convertFromDouble(const std::string &input);



#endif