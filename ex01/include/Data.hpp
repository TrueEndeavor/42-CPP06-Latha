/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:31:45 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/19 15:46:21 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#define RED "\033[0;91m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define GREY "\033[0;90m"
#define RESET "\033[0m"

# include <string>
class	Data
{
	private:
		int			number;
		std::string	text;

	public:
		Data( int number, std::string text );
		Data( const Data& other );
		Data &operator= ( const Data& other );
		~Data();
		
		int			getNumber() const;
		std::string	getText() const;
};

#endif