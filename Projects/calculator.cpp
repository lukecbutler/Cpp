#include <vector>
#include <iostream>
using namespace std;

int main(){
    // init number 1 & 2
    int number1;
    int number2; 

    // User enters number 1 & 2
    cout << "Enter number 1: ";
    cin >> number1;
    cout << endl;

    cout << "Enter number 2: ";
    cin >> number2;
    cout << endl;

    // Init user choice
    int choice;

    // Get user choice
    cout << "1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n\n";
    cout << "Enter a Choice: ";
    cin >> choice;
    cout << endl;

    switch(choice){
        case 1:
            cout << "Your answer is: " << number1 + number2 << endl;
            break;
        case 2:
            cout << "Your answer is: " << number1 - number2 << endl;
            break;
        case 3:
            cout << "Your answer is: " << number1 * number2 << endl;
            break;
        case 4:
            cout << "Your answer is: " << number1 / number2 << endl;
            break;
        
    }
    cout << endl << endl;

    return 0;
}