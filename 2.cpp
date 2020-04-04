#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	long int x0 = 1;
	long int x1 = 2;
	long int sum = 0;
	sum = sum + x1;
	while (x1 <= 4e+6 )
	{
		x1 = x0 + x1;
		x0 = x1 - x0;
		if (x1 % 2 == 0)
		{
			sum = sum + x1;
		}
	}
	cout << sum << endl;
	return 0;
}