// Demo reading FROM and INPUT file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<fstream> 

#include<string> 

int main()
{
	//std::ifstream fin("someInputFile.txt"); //a "relative" filepath
	
//C:\Users\snorm\source\repos\WillItWork
	std::ifstream fin("C://Users/Work/Downloads/someInputFile.txt");
	//("C:\\Users\\Work\\source\\repos\\September17_2024 - COSC1436\\Demo reading FROM and INPUT file\\someInputFile.txt");
	//"absolute" filepath 


	if (!fin.is_open()) //we have not discussed "if" statements/"conditionals" yet, but we will later today 
	{
		std::cout << "FNFE\n"; //"file not found error" 
		return 1; 
	}

	std::string lineFromFile; 
	std::string secondLineFromFile; 
	//std::getline(std::cin, lineFromFile); 
	std::getline(fin, lineFromFile);
	std::getline(fin, secondLineFromFile);

	fin.close(); 

	std::cout << "File contents are: " << "\n";
	std::cout << lineFromFile << "\n";
	std::cout << secondLineFromFile << "\n";
}
