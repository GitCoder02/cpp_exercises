// sum of first n ntural numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, r1, r2;
	cout << "Enter a,b,c";
	cin >> a >> b >> c;
	r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "the roots are " << r1 << "" << r2;
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
