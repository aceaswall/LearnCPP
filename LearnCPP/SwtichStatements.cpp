// Copyright A.T. Chamillard. All Rights Reserved.


#include <iostream>


/**
 * Exercise2 - More CPP: Switch Statements
 * @return Exit status
*/
int main()
{
	// Number 1
	int Number1;

	// Print Message
	std::cout << "Are you a cool guy? (Press 1)\n";
	std::cin >> Number1;

	// Switch Statement
	switch (Number1)
	{
	case 1:
		std::cout << "You're a cool guy!\n\n";
		break;

	default:
		std::cout << "Invalid Input, you are not a cool guy!\n\n";
		break;
	}

	// Number 2
	int Number2;

	// Print Message
	std::cout << "You are a fucking cool guy! (Press 1 or 2)\n\n";
	std::cin >> Number2;

	// Switch Statement
	switch (Number2)
	{
	case 1:
		std::cout << "You aren't a fucking cool guy!\n\n";
		break;
	
	case 2:
		std::cout << "You are a fucking cool guy!\n\n";
		break;

	default:
		std::cout << "Invalid Input, you are not a fucking cool guy!\n\n";
	}

	// Number 3
	int Number3;

	// Print Message
	std::cout << "Are a awsome cool guy? (Press 1, 2 or 3)\n";
	std::cin >> Number3;

	// Switch Statement
	switch (Number3)
	{
	case 1:
		std::cout << "Maybe you're just a cool guy!\n\n";
		break;

	case 2:
		std::cout << "You aren't a cool guy!\n\n";
		break;

	case 3:
		std::cout << "You are an awsome cool guy!\n\n";
		break;

	default:
		std::cout << "Invalid Input, you are not a cool guy!\n\n";
	}

	// Number 4
	int Number4;

	// Print Message
	std::cout << "Are you a freaking awsome cool guy?!\n";
	std::cin >> Number4;

	// Switch Statement
	switch (Number4)
	{
	case 1:
		std::cout << "You are just a cool guy!\n\n";
		break;

	case 2:
		std::cout << "You are just an awsome cool guy!\n\n";
		break;

	case 3:
		std::cout << "You are a FREAKING AWSOME COOL GUY!\n\n";
		break;

	default:
		std::cout << "Invalid Input, YOU'RE A LOOSER!\n\n";
		break;
	}
}
