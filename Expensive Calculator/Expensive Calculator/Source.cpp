//Expensive Calculator
//3/27/2018
//Author: Jimmy Thai

#include<iostream>

int main()
{
	int userInput1;
	int userInput2;
	int answer;

	std::cout << "Please enter a number >>> " << std::endl;
	std::cin >> userInput1;

	std::cout << "Please enter another number less than the first one you inputted >>> " << std::endl;
	std::cin >> userInput2;

	std::cout << userInput1 << " + " << userInput2 << " = " << userInput1 + userInput2 << std::endl;
	std::cout << userInput1 << " - " << userInput2 << " = " << userInput1 - userInput2 << std::endl;
	std::cout << userInput1 << " X " << userInput2 << " = " << userInput1 * userInput2 << std::endl;
	std::cout << userInput1 << " / " << userInput2 << " = " << userInput1 / userInput2 << std::endl;
	std::cout << userInput1 << " % " << userInput2 << " = " << userInput1 % userInput2 << std::endl;

	std::cout << "seven + three = " << 7 + 3 << std::endl;
	std::cout << "7 + 3 = " << 7 + 3 << std::endl;
	std::cout << "7 - 3 = " << 7 - 3 << std::endl;
	std::cout << "7 X 3 = " << 7 * 3 << std::endl;
	std::cout << "7 / 3 = " << 7 / 3 << std::endl;
	std::cout << "7.0 / 3.0 = " << 7.0 / 3.0 << std::endl;
	std::cout << "7 % 3 = " << 7 % 3 << std::endl;

	std::cout << "7 + 3 X 5 = " << 7 + 3 * 5 << std::endl;
	std::cout << "(7+3) X 5 = " << (7 + 3) * 5 << std::endl;
	system("Pause");
	return 0;

}