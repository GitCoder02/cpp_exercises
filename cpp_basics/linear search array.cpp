// linear search array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int A[5], i, key;
    cout << "Enter 5 numbers for array";
    for (i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the key ";
    cin >> key;
    for (i = 0; i < 5; i++)
    {
        if (key == A[i])
        {
            cout << "Found at " << i;
            return 0;
        }      
    }
    cout << "Key not found";
    return 0;

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
