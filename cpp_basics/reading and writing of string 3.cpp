// reading and writing of string 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*
    char s[100];
    char s2[100];

    cout << "Enter your name" << endl;
    cin.getline(s, 100);
    cout << "Welcome " << s << endl;

    cout << "Enter your name" << endl;
    cin.getline(s2, 100);
    cout << "Welcome " << s2 << endl; */

    
    char s[100];
    char s2[100];

    cout << "Enter your name" << endl;
    cin.get(s, 100);
    cout << "Welcome " << s << endl;

    cin.ignore();

    cout << "Enter your name" << endl;
    cin.get(s2, 100);
    cout << "Welcome " << s2 << endl;

    // use cin.ignore() function when asking mutliple strings from user if using cin.get()
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
