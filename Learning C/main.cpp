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

using namespace std;

int main() {
    
    /*
    string name;
    string age;
    
    cout << "What is your name? ";
    getline(cin, name);
    cout << "Thank you, " << name << endl;
    cout << "How old are you, " << name << "?\n";
     
    getline(cin, age);
    cout << "God, you're only " << age << " years old?\n";
     */
    
    cout << 5 + 4 << endl;
    cout << 5 - 4 << endl;
    cout << 5 * 4 << endl;
    cout << 5 / 4 << endl;
    cout << 5 % 4 << endl;
    
    string y;
    getline(cin, y);

    return 0;
}
