#include <iostream>
using namespace std;

class MyClass { // The class
    public: //Access secifier
        int myNum; // Attribute (int)
        string myString; // Attribute (string variable)
};

int main(){

    MyClass myObj; // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Hello from an object";

    // Print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;

    return 0;
}

