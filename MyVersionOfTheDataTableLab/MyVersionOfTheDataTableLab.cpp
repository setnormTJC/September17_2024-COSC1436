// MyVersionOfTheDataTableLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "iostream"
#include"iomanip"

using namespace std; 


int main()
{

	const int NAME_COLUMN_WIDTH = 20; 

	cout << left << setw(NAME_COLUMN_WIDTH) << "Name"; 
	cout << left << setw(20) << "Units available"; 
	cout << left << setw(10) << "Cost"; 
	cout << left << setw(30) << "Short description";
	cout << "\n=========================================";

	cout << "\n";
	cout << left << setw(NAME_COLUMN_WIDTH) << "White shoelaces"; 
	cout << left << setw(20) << 1234; 
	cout << left << setw(10) << 13.99; 
	cout << left << setw(30) << "Not sturdy - don't buy 'em";


	//std::cout << "\ndefault fill: [" << std::m
	//	<< std::setw(10) << 42 << "]\n"
	//	<< "setfill('*'): [" << std::setfill('*')
	//	<< std::setw(10) << 42 << "]\n";

}
