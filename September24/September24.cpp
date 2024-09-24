// September24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //input/output stream 
#include<string>
#include <fstream> //any guesses as to what f stands for - FILE 
//why not a river or a crik (creek)?

using std::string;
using std::cout;
using std::ofstream;

//namespace MySpace
//{
//
//}

int main()
{
	////a reminder of what getline does (and why we might prefer it to cin >> stringName) 

	//cout << "Enter something ...\n"; 
	//string response; 

	////std::cin >> response; 
	//std::getline(std::cin, response, ',');

	//cout << "You entered this: " << response << "\n";

	//int fahrenheit = 32; //freezing point of water 
	////freezing point of in Celsius is 0 deg C

	//cout << "Celsius ... equivalent freezing point is " << 5.0 / 9 * (fahrenheit - 32) << "\n";

	//fahrenheit = 212; //BOILING point of water (at 1 atm / 760 mm Hg) 

	//cout << "Celsius ... equivalent BOILING point is " << 5.0 / 9 * (fahrenheit - 32) << "\n"; 

	//cout << "Look here" << 5 / 9 << "\n"; 

	//let's write to an OUTPUT file - hooray!

	cout << "This program will self destruct\n";
	system("pause");

	ofstream fout("September24.cpp");

	fout << "";

	//ofstream fout("toAMouse.txt", std::ios::app);
	//fout << "Wee, slicket, cowrin', tim'rous beastie\n";
	//fout << "O' what a panic's in thy breastie\n";

	fout.close(); //a good habit (always close your files after editing)

	//for (int i = 0; i < 100'000; i++)
	//{
	//	fout << "a"
	//}
}
