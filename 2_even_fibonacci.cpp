// Even Fibonacci numbers
// https://projecteuler.net/problem=2
// sum of the even-valued terms in the Fibonacci sequence whose values do not exceed four million
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	int million = pow(10,6);
	int N = 4*million;
	// int N = 15;
	int a1, a4, a7, sum;
	a1 = 2;
	a4 = 8;
	sum = a1 + a4;
	while((4*a4 + a1)< N){
		a7 = 4*a4 + a1;
		sum += a7;
		a1 = a4;
		a4 = a7;
	}
	cout << sum << endl;
	return 0;
}