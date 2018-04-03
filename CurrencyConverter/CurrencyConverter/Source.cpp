//CurrencyConverter
//04/3/2018
//Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	double americanDollar;
	double britishPound = .6318;
	double mexicanPesos = 12.8863;
	double japaneseYen = 82.34;

	std::cout << "How many dollars do you have? >>>" << std::endl;
	std::cin >> americanDollar; 

	double britishToAmerican;
	britishToAmerican = americanDollar * britishPound;
	std::cout << "American to British pound is " << britishToAmerican << std::endl;

	double mexicanToAmerican;
	mexicanToAmerican = americanDollar * mexicanPesos;
	std::cout << "American to Mexican pesos is " << mexicanToAmerican << std::endl;

	double japaneseToAmerican;
	japaneseToAmerican = americanDollar * japaneseYen;
	std::cout << "American to Japanese yen is " << japaneseToAmerican << std::endl;


	system("pause");
	return 0;


}