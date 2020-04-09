#include<iostream>
#include<fstream>
#include<iomanip>
#include<math.h>
#include<cstdlib>
#include<sstream>
#include<vector>
#include <algorithm>
#include <iterator>
 
using namespace std;

int numDivisors(long int n)
{
	vector<long int> factors;
	for(int i = 1; i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			if(n%i == i)
			{
				factors.push_back(i);
			}
			else
			{
				factors.push_back(i);
				factors.push_back(n%i);
			}
		}
	}
	return factors.size();
}


int main()
{
	int num_factors = 0;
	long int n = 1;
	while(num_factors <= 500)
	{
		num_factors = numDivisors(n*(n+1)/2);
		n++;
	}
	n--;
	cout << n*(n+1)/2 << endl;
	return 0;
}