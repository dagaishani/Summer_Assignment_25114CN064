// Write a program to Create number guessing game.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number=45;
    int guess;

    cout<<"Guess the number between 1 and 100:"<<endl;

    do
    {
        cin>>guess;

        if(guess>number)
        {
            cout<<"Too high. Try again."<<endl;
        }
        else if(guess<number)
        {
            cout<<"Too low. Try again."<<endl;
        }

    }while(guess!=number);

    cout<<"Congratulations! You guessed the correct number.";

    return 0;
}