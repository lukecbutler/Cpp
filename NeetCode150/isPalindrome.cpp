// write an algorithm that checks if a string is a palindrome
// What is a palindrome?
// A string that (excluding non-alphanumeric characters) is the same forward as backwards

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;


bool isPalindrome(string s) {
    // init a new string
    string str = "";

    // Loop through given string s
    for (char c : s){
        if (isalnum(c)){
            str += tolower(c);
        }
    }

    string newStr = str; // create copy of str
    reverse(newStr.begin(), newStr.end()); // reverse newStr (copy of str)

    if (str == newStr){
        return true; // because a palindrome reversed in the same sequence of charcters
    }
    else{return false;}

}

int main(){
    string s = "Racecar!";
    
    cout << isPalindrome(s);

    return 0;
}