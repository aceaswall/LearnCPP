// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>


/**
 * Calculating int number
 * @return Exit status
*/
int main()
{
	// variables
	int Linha1{ 241 };
	float Linha2{ 2.2 };

	// print lines
	std::cout << "Linha 1" << "\n";
	std::cout << "Linha 2" << "\n";
	std::cout << "The result is: " << (float)Linha1 / Linha2;
}
