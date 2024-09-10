/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:40:30 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/19 16:55:09 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>
#include <iomanip>
#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	// Create a package (like receiving a new package in the courier office)
	Data data(42, "Hello, world!");

	// Get the address of the package (physical location in memory)
	Data* ptr = &data;
	std::cout << "Original Data Address (Physical Location):" << std::endl;
	std::cout << "Hex: " << std::hex << reinterpret_cast<uintptr_t>(ptr) << std::endl;  // Hexadecimal format
	std::cout << "Dec: " << std::dec << reinterpret_cast<uintptr_t>(ptr) << std::endl;  // Decimal format

	// Serialize the package pointer to a tracking number
	uintptr_t raw = Serializer::serialize(ptr);
	std::cout << "\nSerialized Pointer Value (Tracking Number):" << std::endl;
	std::cout << "Hex: " << std::hex << raw << std::endl;   // Tracking number in hexadecimal format
	std::cout << "Dec: " << std::dec << raw << std::endl;   // Tracking number in decimal format

	// Deserialize the tracking number back to the package pointer
	Data* deserializedPtr = Serializer::deserialize(raw);
	std::cout << "\nDeserialized Data Address (Restored Package Location):" << std::endl;
	std::cout << "Hex: " << std::hex << reinterpret_cast<uintptr_t>(deserializedPtr) << std::endl;  // Restored address in hex
	std::cout << "Dec: " << std::dec << reinterpret_cast<uintptr_t>(deserializedPtr) << std::endl;  // Restored address in dec

	// Check if deserialization was successful
	if (deserializedPtr == ptr) {
		std::cout << "\nDeserialization successful!" << std::endl;
		std::cout << "Number: " << deserializedPtr->getNumber() << ", Text: " << deserializedPtr->getText() << std::endl;
	} else {
		std::cout << "\nDeserialization failed!" << std::endl;
	}
	return 0;
}
