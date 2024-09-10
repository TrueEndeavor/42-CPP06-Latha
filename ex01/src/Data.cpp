/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 15:01:10 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/19 16:43:06 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

Data::Data( int number, std::string text ) : number( number ), text( text )
{
	std::cout << YELLOW << "Data : Default constructor called" << RESET << std::endl;
}

Data::~Data()
{
	std::cout << YELLOW << "Data : Default destructor called" << RESET << std::endl;
}

Data::Data( const Data& other)
{
	*this = other;
	std::cout << YELLOW << "Data : copy constructor called" << RESET << std::endl;
}

Data&	Data::operator = ( const Data& other )
{
	if ( this != &other )
	{
		this->number = other.number;
		this->text = other.text;
	}
	std::cout << YELLOW << "Data : assignement operator called" << RESET << std::endl;
	return *this;
}

int	Data::getNumber() const
{
	return number;
}

std::string	Data::getText() const
{
	return text;
}