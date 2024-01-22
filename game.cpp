#include <iostream>
using namespace std;

int main() {
    
    cout << " |*| Welcome to my Game |*| \n Hit Enter to continue...\n";
    
    while (cin.get() != '\n');
    
    int chosenNumber, doubledNumber, addedTen, dividedByTwo, finalResult;

    cout << "Choose any number : ";
    cin >> chosenNumber;

    while (cin.get() != '\n');
    
    doubledNumber = chosenNumber * 2;
    cout << "Double the chosen number, remember ans. and hit enter ";

    while (cin.get() != '\n');

    addedTen = doubledNumber + 10;
    cout << "Add 10 to the doubled number ";

    while (cin.get() != '\n');

    dividedByTwo = addedTen / 2;
    cout << "Divide the result by 2 ";

    while (cin.get() != '\n');

    finalResult = dividedByTwo - chosenNumber;
    cout << "Subtract the initially chosen number \n";

    while (cin.get() != '\n');
    
    cout << "The final result is -> " << finalResult <<" ?\n";

    cout << "Thanks to play my Game\n";

    cout << endl;
    cout << "Press 'Enter' to exit Game";
    while (cin.get() != '\n');
}

