// Demo reading FROM and INPUT file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<fstream> 

#include<string> 

int main()
{
	//std::ifstream fin("someInputFile.txt"); //a "relative" filepath

	std::ifstream fin
	("C:\\Users\\Work\\source\\repos\\September17_2024 - COSC1436\\Demo reading FROM and INPUT file\\someInputFile.txt");
	//"absolute" filepath 

	if (!fin.is_open())
	{
		std::cout << "FNFE\n";
		return 1; 
	}

	std::string lineFromFile; 

	//std::getline(std::cin, lineFromFile); 
	std::getline(fin, lineFromFile);

	std::cout << "File contents are: " << lineFromFile << "\n";
}
