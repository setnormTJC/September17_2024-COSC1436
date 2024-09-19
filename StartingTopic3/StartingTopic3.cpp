

#include "iostream"

#include"cmath"


#include"sstream"

#include"iomanip" //input output manipulation 


//#include"fstream"

using std::cout; 

using std::string; 

using std::cin; 


using namespace std; 

int main()
{
    ////std::cout << "Hello World!\n";

    ////<< this is the "output operator" 
    //// >> this is the INPUT operator cin >> age; 

    //cout << "pow(5, 2) yields this: ";
    //cout << pow(5, 2); 
    //cout << "\n"; //pow means power
    ////5 ^ 2

    //cout << "pow(2, 5) yields this: " << pow(2, 5) << "\n"; //pow means power


    //int theResult = pow(6, 2); 

    //cout << "theResult is: " << theResult << "\n";
    //cout << "theResult is: " << pow(6, 2) << "\n";

    ////sqrt function demo: 
    //cout << "sqrt of 25 is: " << sqrt(25) << "\n";


    //float result = sqrt(-1); 
    //cout << "Result is: " << result << "\n";
    
    //string originalString = "Apple Macintosh"; 

    //string anagram = "Laptop machines"; 


    ////cout << "The length (number of characters in )" << originalString << " is: " << originalString.length() << "\n";


    ////int bigNumber = 100'000'000; // 10^ 8 = (10 ^ 8) ^ (1/2) = 10^4
    ////cout.imbue(std::locale(""));
    ////cout << sqrt(bigNumber) << "\n";

    ////int a = 0b0100; 

    ////cout << "Here is a binary number? " << a << "\n";
    ////cout <

    ////getline()

    //cout << "Enter ... some stuff\n";
    //string someStuff; 

    //cin.ignore(3); //good use case? 
    //cin >> someStuff; 
    //cout << "You entered: " << someStuff << "\n";



    //using std::endl; 

    //int number;
    //cout << "Enter a number: " << endl;
    //cin >> number;
    //cout << "You entered: " << number << endl;

    //cin.ignore(); 
    //

    //string message;
    //cout << "Enter a message: " << endl;
    //getline(cin, message);
    //cout << "You entered: " << message << endl;


    double mealCost, tipAmount, totalCost; 

    mealCost = 1012301.99; 
    tipAmount = mealCost * 0.20; 

    totalCost = mealCost + tipAmount; 

    cout << fixed << setprecision(2); 
    cout << "Total cost: " << totalCost << "\n";




}
