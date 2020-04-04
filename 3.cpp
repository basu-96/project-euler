#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	long int n = 600851475143;
	while (n % 2 == 0)
	{
		n = n/2;
	}
	for (int i = 3; i < sqrt(n); i = i + 2)
	{
		while(n % i == 0)
		{
			n = n / i;
		}
	}
	cout << n << endl;
	return 0;
}