// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int min(int k, ...)
{
	int *p = &k;
	int s = 0; int max = INT_MAX;
	for (; k != 0; k--)
	{
		s = *(++p);
		if (s < max)
		{
			max = s;
		}
	}
	return max;

}

int main()
{
	int m = min(5, 100000, 23400, 234324, 21200,11111);
	cout << "min from 5 elements:\t" << m << endl;
	 m = min(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	cout << "min from 10 elements:\t" << m << endl;
	m = min(12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
	cout << "min from 5 elements:\t" << m << endl;
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
