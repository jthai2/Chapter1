//MadLibs 2.0
//03/28/2018
//Author: Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	std::string characterTrait;
	std::string verb;
	std::string mood;

	int aFirstNumberChosenByUser;
	int bSecondNumberChosenByUser;
	int cThirdNumberChosenByUser;
	int dResult;

	std::cout << "Welcome to Mad Libs 2.0. \n\n";
	std::cout << "Enter a trait about yourself >>>" << std::endl;
	std::cin >> characterTrait;
	std::cout << "Enter a verb that ends in ING >>>" << std::endl;
	std::cin >> verb;
	std::cout << "Enter a number >>>" << std::endl;
	std::cin >> aFirstNumberChosenByUser;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> bSecondNumberChosenByUser;
	std::cout << "Enter one more number >>>" << std::endl;
	std::cin >> cThirdNumberChosenByUser;
	std::cout << "Enter your mood >>>" << std::endl;
	std::cin >> mood;

	dResult = aFirstNumberChosenByUser * bSecondNumberChosenByUser;

	std::cout << "The " << characterTrait << " person is " << verb << " to his death. He has " << aFirstNumberChosenByUser << " children, "
		<< bSecondNumberChosenByUser << " dogs, and " << cThirdNumberChosenByUser << " wives. But he doesn't care because he is " << mood <<
		". His age is " << dResult << "." << std::endl;


	system("pause");
	return 0;


}