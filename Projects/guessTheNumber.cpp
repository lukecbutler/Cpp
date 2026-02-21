#include <iostream>
using namespace std;

void guessTheNumber(){
    int RANGE = 100;

    // prompt user with start screen
    cout << "Welcome to Swindle's Guess the Number Game! Enter a number between 1 & 100 below.";

    // Get a random number everytime the program runs
    srand(time(0));
    // Generate a random number between 0 and X
    int randomNumber = rand() % RANGE;

    // Guess count
    int guessCount = 1;
    while(true){
        // Gather user input
        int guess;
        cout << "\nEnter your guess into the terminal.\n";
        cin >> guess;

        if (guess == randomNumber){ // if user guesses correctly, break out of the loop
            cout << "\nYou guessed correctly in " << guessCount << " times! The number was: " << guess << endl;;
            break;
        }

        if (guess < randomNumber){ // if user guess is to low, inform user
            cout << "\nYour guess is to low. Try again!";
            guessCount++;
        }

        if (guess > randomNumber){ // if user guess is to low, inform user
            cout << "\nYour guess is to high. Try agian!";
            guessCount++;
        }
    }
    cout << endl;
}

int main(){
    guessTheNumber();
}