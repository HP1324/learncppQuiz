#include "input.h"
#include "answer.h"
void printAnswer()
{
	double d1{ userInput() };
	double d2{ userInput() };
	char symbol{ getSymbol() };
	if (symbol == '+')
		std::cout << d1 << " + " << d2 << " is " << d1 + d2 << '\n';
	else if (symbol == '-')
		std::cout << d1 << " - " << d2 << " is " << d1 - d2 << '\n';
	else if (symbol == '*')
		std::cout << d1 << " * " << d2 << " is " << d1 * d2 << '\n';
	else if (symbol == '/')
		std::cout << d1 << " / " << d2 << " is " << d1 / d2 << '\n';
}