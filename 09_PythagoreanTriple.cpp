// Special Pythagorean triplet
// https://projecteuler.net/problem=9
// Pythagorean triplet for which a + b + c = 1000

#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
	for (int m = 250; m > 0; m--)
	{
		for (int n = 1; n < m; n++)
		{
			if (m*(m+n)==500)
			{
				cout << m << "\t" << n << endl;
				int a = pow(m,2) - pow(n,2);
				int b = 2*m*n;
				int c = pow(m,2) + pow(n,2);
				cout << a << "\t" << b << "\t" << c << "\n";
				cout << a*b*c << "\n";
				m = 0;
				break;
			}
			continue;
		}
	}
	return 0;	
}