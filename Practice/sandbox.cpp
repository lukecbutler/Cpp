#include <vector>
#include <set>
#include <iostream>
using namespace std;

void printSquared(int num){
    cout << "The square of " << num << " is: \n";
    cout << num * num << endl;
}

int main(){
    printSquared(5);
    return 0;
}