/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:43:52 by yachen            #+#    #+#             */
/*   Updated: 2024/07/19 18:47:33 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <string> 

int main() {
	// Seed the random number generator
	std::srand(std::time(NULL));

	// Generate a random object
	Base* obj = generate();

	// Identify the type using pointer
	std::cout << "Identifying via pointer:" << std::endl;
	identify(obj);
	std::cout << std::endl;
	
	// Identify the type using reference
	std::cout << "Identifying via reference:" << std::endl;
	identify(*obj);

	// Clean up
	delete obj;

	return 0;
}