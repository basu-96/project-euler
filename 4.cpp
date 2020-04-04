#include<algorithm>
#include<iostream>
#include<cmath>

using namespace std;

bool isPal(int n)
{
	bool flag;
	int t, r = 0;
	t = n;
	while(t != 0)
	{
		r = r * 10;
		r = r + t%10;
		t = t/10;
	}
	if (r == n)
	{
		flag = true;
	}
	return flag;
}

int main()
{
	int num1;
	int num2;
	for(int i = 999; i > 99; i--)
	{
		for(int j = 999; j > 99; j--)
		{
			if(isPal(i*j))
			{
				// num1 = i;
				// num2 = j;
				cout << i << "\t" << j << endl;
				break;
			}
		}
	}
	return 0;
}

