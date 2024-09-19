#include <iostream>
int main()
{

	double costPerGallon = 2.51; 

	std::cout << "Enter how many gallons of gas your vehicles holds: \n";
	int capacityOfFullTank;// = 10; //gallons
	std::cin >> capacityOfFullTank; 

	std::cout << "You said your car holds this many gallons - right? " << capacityOfFullTank << "\n";
	double costOfFullTank = costPerGallon * capacityOfFullTank; 

	std::cout << "Total cost of filling your tank up (from empty): " << costOfFullTank << "\n";


	return 0;
}