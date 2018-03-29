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
	double tamale = 1.50;
	double chimichanga = 2.50;
	double tacosOrdered, burritosOrdered, enchiladasOrdered, tostadasOrdered, drinkOrdered, churroOrdered, supremeBurritoOrdered, potatoOllasOrdered, 
		tamaleOrdered, chimichangaOrdered;
	double total;

	std::cout << "*******Welcome to Delgados Tacos*******" << std::endl;
	std::cout << "               _____________                               " << std::endl;
	std::cout << "  ____________/____________/_________________              " << std::endl;
	std::cout << "  |                                 |        |             " << std::endl;
	std::cout << "  |                                 |_       |             " << std::endl;
	std::cout << "  |           ______________        | |  O_  |             " << std::endl;
	std::cout << "  |          |   Delgados   |       | |_  |__|             " << std::endl;
	std::cout << "  |          |    Tacos     |       |___|_|__|_            " << std::endl;
	std::cout << "  |          |    Truck     |                  |_          " << std::endl;
	std::cout << "  |          ----------------                    |__   _   " << std::endl;
	std::cout << "  |                                      ___________|_|_|  " << std::endl;
	std::cout << "  |                           ___        |              |  " << std::endl;
	std::cout << " _|                          |   |       |              |  " << std::endl;
	std::cout << "|_|       __                 |  O|       |__            |_ " << std::endl;
	std::cout << "  |______|__|________________|___|_______|__|___________|_|" << std::endl;
	std::cout << "          OO                              OO               " << std::endl;


	std::cout << "How many tacos would you like?" << std::endl;
	std::cin >> tacosOrdered;

	std::cout << "How many burritos would you like?" << std::endl;
	std::cin >> burritosOrdered;

	std::cout << "How many enchiladas would you like?" << std::endl;
	std::cin >> enchiladasOrdered;

	std::cout << "How many tostadas would you like?" << std::endl;
	std::cin >> tostadasOrdered;

	std::cout << "How many drinks would you like?" << std::endl;
	std::cin >> drinkOrdered;

	std::cout << "How many churros would you like?" << std::endl;
	std::cin >> churroOrdered;

	std::cout << "How many supreme burritos would you like?" << std::endl;
	std::cin >> supremeBurritoOrdered;

	std::cout << "How many potato ollas would you like?" << std::endl;
	std::cin >> potatoOllasOrdered;

	std::cout << "How many tamales would you like?" << std::endl;
	std::cin >> tamaleOrdered;

	std::cout << "How many chimichangas would you like?" << std::endl;
	std::cin >> tamaleOrdered;

	total = (tacos*tacosOrdered) + (burritos*burritosOrdered) + (enchiladas*enchiladasOrdered) + (tostadas*tostadasOrdered) + (drink*drinkOrdered)
		+ (churro*churroOrdered) + (supremeBurrito*supremeBurritoOrdered) + (potatoOllas*potatoOllasOrdered) + (tamale*tamaleOrdered) + 
		(chimichanga*chimichangaOrdered);
	std::cout << "Your total is >>> " << total;

	system("pause");
	return 0;


}