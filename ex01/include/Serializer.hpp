/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:54:26 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/19 16:39:01 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		Serializer( const Serializer& other );
		Serializer&	operator= ( const Serializer& other );

	public:
		~Serializer();

		static uintptr_t serialize( Data* ptr );
		static Data *deserialize( uintptr_t raw );
};

#endif