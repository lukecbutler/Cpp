#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

double add(double a, double b){
    return a + b;
}

double subtract(double a, double b){
    return a - b;
}

double multiply(double a, double b){
    return a*b;
}

double divide(double a, double b){
    return a / b;
}

void displayMenu(){
    cout << "Wecome to the C++ Calculator." << endl;
    cout << "Available operations are: " << endl << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
}


int main(){
    displayMenu(); // display menu

    int operationChoice; // init operationChoice
    do{ // ensure the user enters a number between 1 & 4
        cout << "Input 1 - 4 in the terminal to choose: "; 
        cin >> operationChoice;
    } while(operationChoice < 1 || operationChoice > 4);


    double firstNumber; // get first number
    cout << "Enter your first number: "; // ensure the user enters a double
    while (!(cin >> firstNumber)){
        cout << "Invalid Input. Try again: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }


    double secondNumber; // get second number
    cout << "Enter your second number: ";
    while (!(cin >> secondNumber)){
        cout << "Invalid Input. Try again: ";
        cin.clear();
        cin.ignore(10000,'\n');
    }



    double answer = 0; 
    // Based on user input, call appropriate function
    switch (operationChoice)
    {
    case 1:
        answer = add(firstNumber, secondNumber);
        cout << firstNumber << " plus " << secondNumber << " is equal to " << answer <<endl;
        break;
    case 2:
        answer = subtract(firstNumber, secondNumber);
        cout << firstNumber << " minus " << secondNumber << " is equal to " << answer <<endl;
        break;
    case 3:
        answer = multiply(firstNumber, secondNumber);
        cout << firstNumber << " multiplied by " << secondNumber << " is equal to " << answer <<endl;
        break;
    case 4:
        answer = divide(firstNumber, secondNumber);
        cout << firstNumber << " divided by " << secondNumber << " is equal to " << answer <<endl;
        break;
    
    default:
        cout << "You did not enter 1, 2, 3, or 4!";
    }


    return 0;
}