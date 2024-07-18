/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionChecks.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:40:52 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/18 15:03:23 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONCHECKS_HPP
# define CONVERSIONCHECKS_HPP

# include "Utils.hpp"

bool	canConvertToChar(const std::string& literal);
bool	canConvertToInt(const std::string& literal);
bool	canConvertToFloat(const std::string& literal);
bool	canConvertToDouble(const std::string& literal);

#endif