//DelgadosTacos
//03/28/2018
//Author: Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	double tacos = 0.99;
	double burritos = 1.99;
	double enchiladas = 2.99;
	double tostadas = 1.50;
	double drink = 0.99;
	double churro = 1.25;
	double supremeBurrito = 4.50;
	double potatoOllas = 1.99;
	double tacosOrdered;
	double total;

	std::cout << "*******Welcome to Delgados Tacos*******" << std::endl;
	std::cout << "  _______________________________________ " << std::endl;
	std::cout << "  |                                     |" << std::endl;
	std::cout << "  |                                     |" << std::endl;
	std::cout << "  |          _______________            |" << std::endl;
	std::cout << "  |         |  Delgados    |            |" << std::endl;
	std::cout << "  |         |   Tacos      |            |" << std::endl;
	std::cout << "  |         |   Truck      |            |" << std::endl;
	std::cout << "  |         ----------------            |" << std::endl;
	std::cout << "  |                                     |____________}" << std::endl;
	std::cout << "  |                                     |            |" << std::endl;
	std::cout << "  |                                     |            |" << std::endl;
	std::cout << "  |                                     |            |" << std::endl;
	std::cout << "  ___________________________________________________}" << std::endl;
	std::cout << "          OO                             OO          " << std::endl;


	std::cout << "How many tacos would you like?" << std::endl;
	std::cin >> tacosOrdered;
	total = tacos * tacosOrdered;
	std::cout << "Your total is >>> " << total;

	system("pause");
	return 0;



}