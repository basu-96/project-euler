#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	int n = 100;
	int sum_of_n = n*(n+1)/2;
	int sum_of_sq = 0;
	for(int i = 1; i <= n; i++)
	{
		sum_of_sq = sum_of_sq + i*i;
	}
	cout << sum_of_n*sum_of_n - sum_of_sq << endl;
	return 0;
}