

#include "iostream"

int main()
{
    std::cout << "Hello World!\n";

    //<< this is the "output operator" 
    // >> this is the INPUT operator cin >> age; 

    std::cout << "pow(5, 2) yields this: ";
    std::cout << pow(5, 2); 
    std::cout << "\n"; //pow means power
    //5 ^ 2

    std::cout << "pow(2, 5) yields this: " << pow(2, 5) << "\n"; //pow means power


    int theResult = pow(6, 2); 

    std::cout << "theResult is: " << theResult << "\n";
    std::cout << "theResult is: " << pow(6, 2) << "\n";

    //sqrt function demo: 
    std::cout << "sqrt of 25 is: " << sqrt(25) << "\n";
}
