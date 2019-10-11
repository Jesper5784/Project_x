#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{

    srand (time(NULL)); //Initialize the random number generator

    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 4;
    bool outOfGuesses = false;

    secretNum = rand() % 10+1;

    cout << "The secret number is between 1-10\n";

    while(secretNum != guess && !outOfGuesses){

        if(guessCount<guessLimit){

        cout << "Enter guess: ";
        cin >> guess;
        guessCount++;

        } else {
            outOfGuesses = true;
        }

    }

    if(outOfGuesses){
        cout << "You Lose!";
    } else {
        cout << "You Win!";
    }

}