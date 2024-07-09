// factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return  n * factorial(n - 1);
}

int main()
{
	cout<<factorial(5);
}


