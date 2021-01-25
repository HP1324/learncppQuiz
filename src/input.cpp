//#include<iostream>
#include "input.h"
double userInput()
{
	std::cout << "Enter a double value : ";
	double num;
	std::cin >> num;
	return num;
}
char getSymbol()
{
	std::cout << "Enter one of the following arithmetic symbols : +, -, *, /  :";
	char sym;
	std::cin >> sym;
	return sym;
}
