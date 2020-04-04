#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int num = 40;
	while(0<1)
	{
		int rem = 0;
		for(int i = 1; i<=20; i++)
		{
			rem = rem + num % i;
		}
		if (rem == 0)
		{
			cout << num << endl;
			break;
		}
		num++;
	}
	return 0;
}