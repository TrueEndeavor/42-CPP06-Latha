/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 15:04:43 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/19 16:42:57 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

Serializer::Serializer()
{
	std::cout << YELLOW << "Serializer : Default constructor called" << RESET << std::endl;
}

Serializer::~Serializer()
{
	std::cout << YELLOW << "Serializer : Default destructor called" << RESET << std::endl;
}

Serializer::Serializer( const Serializer& other)
{
	*this = other;
	std::cout << YELLOW << "Serializer : copy constructor called" << RESET << std::endl;
}

Serializer&	Serializer::operator = ( const Serializer& other )
{
	if ( this != &other )
		*this = other;
	std::cout << YELLOW << "Serializer : assignement operator called" << RESET << std::endl;
	return *this;
}

uintptr_t	Serializer::serialize( Data* ptr )
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
