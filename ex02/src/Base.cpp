/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:57:24 by lannur-s          #+#    #+#             */
/*   Updated: 2024/07/19 18:59:47 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout << YELLOW << "Base: Default destructor called\n" << RESET << std::endl;
}

Base*	generate()
{
	srand(time(NULL));
	int	r = rand() % 3;
	switch (r)
	{
		case 0:
			std::cout << YELLOW << "object A created\n" << RESET;
			return new A;
		case 1:
			std::cout << YELLOW << "object B created\n" << RESET;
			return new B;
		case 2:
			std::cout << YELLOW << "object C created\n" << RESET;
			return new C;
	}
	return NULL;
}

void	identify( Base *p )
{
	std::cout << "Identify object type by pointer\n";
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << YELLOW << "Actual type: A" << RESET << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << YELLOW << "Actual type: B" << RESET << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << YELLOW << "Actual type: C" << RESET << std::endl;
	else
		std::cout << YELLOW << "Unknown type" << RESET << std::endl;
}

void	identify( Base &p )
{
	std::cout << "Identify object type by reference\n";
	try
	{
		if (&dynamic_cast<A&>(p) != NULL)
	   		std::cout << BLUE << "Actual type: A" << RESET << std::endl;
	}
	catch (...)
	{
		try
		{
			if (&dynamic_cast<B&>(p) != NULL)
				std::cout << BLUE << "Actual type: B" << RESET << std::endl;
		}
		catch (...)
		{
			try
			{
				if (&dynamic_cast<C&>(p) != NULL)
					std::cout << BLUE << "Actual type: C" << RESET << std::endl;
			}
			catch (...)
			{
				std::cout << BLUE << "Unknown type" << RESET << std::endl;
			}	
		}
	}	
}

/*
Step 1: Object Creation
-------------------------
+------------------+
|      Base        |
+------------------+
         ^
         |
+--------+--------+
|        |        |
|        |        |
v        v        v
+---+  +---+    +---+
| A |  | B |    | C |
+---+  +---+    +---+

Step 2: Identification via Pointer
-----------------------------------
+-------------------+
|     Base* p       |      (Points to an instance of B)
+-------------------+
         |
         v
+-------------------+
|        B          |
+-------------------+
- dynamic_cast<A*>(p) == nullptr
- dynamic_cast<B*>(p) != nullptr
- dynamic_cast<C*>(p) == nullptr

Output: 
Identified via pointer: This is an instance of class B.

Step 3: Identification via Reference
-------------------------------------
+-------------------+
|     Base& ref     |      (Reference to an instance of B)
+-------------------+
         |
         v
+-------------------+
|        B          |
+-------------------+
- dynamic_cast<A&>(ref) throws std::exception
- dynamic_cast<B&>(ref) succeeds
- dynamic_cast<C&>(ref) throws std::exception

Output: 
Identified via reference: This is an instance of class B.
*/