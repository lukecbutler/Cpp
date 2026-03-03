#include <string>
#include <algorithm>
#include <iostream>
using namespace std;


bool isPalindrome(string s) {
    // init new string
    string str = "";

    // loop through parameter s, check if character isalnum (is alphanumerical)
    // if alnum, convert to lowercase & add it to new string
    for (char c : s){
        if(isalnum(c)){
            str += tolower(c);
        }
    }

    string str2 = str; // new string
    reverse(str2.begin(), str2.end()); // reverses str2 in memory

    return str == str2;
}

int main(){
    string s = "Was it a car or a cat I saw?";
    
    cout << isPalindrome(s);

    return 0;
}