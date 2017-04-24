//
//  main.cpp
//  Learning C
//
//  Created by Jesse Onolememen on 24/04/2017.
//  Copyright © 2017 Jesse Onolememen. All rights reserved.
//

// This is my first C++ Program
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    int number_of_gumballs;
    int user_guess;
    int guesses = 0;
    
    while (true) {
        system("CLS"); // clears the screen
        cin.clear();
        guesses = 0;
    
        srand(static_cast<unsigned int>(time(0)));
        number_of_gumballs = rand() % 1000 + 1;
    
        cout << "How many gumballs are in the jar?" << endl;
    
        do {
            cout << "Enter your guess: ";
            cin >> user_guess;
        
            if (user_guess > number_of_gumballs) {
                cout << "Too High!" << endl << endl;
            }
        
            if (user_guess > number_of_gumballs) {
                cout << "Too Low!" << endl << endl;
            }
        
            guesses ++;
        }
    
        while (user_guess > number_of_gumballs || user_guess > number_of_gumballs);
        cout << "You guessed the right amount of gumballs!" << endl << endl;
        cout << "You took " << guesses << " guesses" << endl << endl;
        
        system("PAUSE");
    }
    
    return 0;
    
}
