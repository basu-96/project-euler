#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int m,n;
	for(m = 1; m < 50; m++)
	{
		for(n = 1; n < m; n++)
		{
			// Ref :- https://en.wikipedia.org/wiki/Pythagorean_triple
			int a = m*m - n*n;
			int b = 2 * m * n;
			int c = m*m + n*n;
			// cout << a << "\t" << b << "\t" << c << "\t" << a+b+c << endl;
			int diff = pow(c,2) - (pow(a,2) + pow(b,2));
			int sum = a + b + c;
			if (sum == 1000)
			{
				cout << a*b*c << endl;
				break;
			}
		}
	}
	return 0;
}