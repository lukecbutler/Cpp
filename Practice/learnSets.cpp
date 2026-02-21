#include <iostream>
#include <set>

using namespace std;

int main() {
    // Create a set -> print it to console
    cout << "Original Set: " << "\n";
    set<int> mySet = {1,2,3}; // Initalize the set
    for (int num : mySet){
        cout << num << endl;
    }


    // Insert 4 & 5 to the set
    mySet.insert(4);
    mySet.insert(5);
    // Print out set with 4 & 5 added to it
    cout << "\nSet with additional numbers: " << "\n";
    for (int number : mySet){ // print out set
        cout << number << endl;
    }


    // Erase 4 & 5 from the set
    cout << "\nSet after removing the added numbers: " << "\n";
    mySet.erase(4);
    mySet.erase(5);
    // Print out the set after erasing 4 & 5
    for (int num : mySet){
        cout << num << endl;
    }

    // Check for membership
    if (mySet.contains(2)){
        cout << "C++ 23 is running!";
    }

    // Terminate the program
    return 0;
}