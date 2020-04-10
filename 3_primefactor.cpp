// Largest prime factor
// https://projecteuler.net/problem=3
// largest prime factor of the number N = 600851475143
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	long int N = 600851475143;
	while (N%2 == 0){
		N = N/2;
	}
	for (int p = 3; p < sqrt(N); p=p+2)
	{
		while (N%p == 0){
			N = N/p;
		}
	}
	cout << N << endl;
	return 0;
}