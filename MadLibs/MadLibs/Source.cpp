//MadLibs
//03/27/2018
//Author: Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	std::string color;
	std::string wordEst;
	std::string bodyPartPlural;
	std::string animal;
	std::string noun;
	std::string pluralNoun;
	int aFirstNumberChosenByUser;
	int bSecondNumberChosenByUser;
	int cTheResultsOfaMinusB;

	std::cout << "Welcome to my Mad libs. \n\n";
	std::cout << "Enter your favorite color >>>" << std::endl;
	std::cin >> color;
	std::cout << "Enter a word ending in EST >>>" << std::endl;
	std::cin >> wordEst;
	std::cout << "Enter a body part plural >>>" << std::endl;
	std::cin >> bodyPartPlural;
	std::cout << "Enter an animal >>>" << std::endl;
	std::cin >> animal;
	std::cout << "Enter a noun >>>" << std::endl;
	std::cin >> noun;
	std::cout << "Enter a plural noun >>>" << std::endl;
	std::cin >> pluralNoun;
	std::cout << "Enter a number >>>" << std::endl;
	std::cin >> aFirstNumberChosenByUser; 
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> bSecondNumberChosenByUser;


	cTheResultsOfaMinusB = aFirstNumberChosenByUser - bSecondNumberChosenByUser;

	std::cout << "The " << color << " Dragon is the " << wordEst << " Dragon of all. It has " << cTheResultsOfaMinusB<<std::endl;
	std::cout << bodyPartPlural << ", and a " << animal << " shaped like a " << noun << ". It loves to eat " << pluralNoun <<
		", although it will feast on nearly anything." << std::endl;

	system("pause");
	return 0;

}