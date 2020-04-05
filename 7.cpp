#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

bool isPrime(long int n)
{
	if (n <= 1) return false;

	for(long int i = 2; i < n-1; i++)
	{
		if (n%i == 0) return false;
	}
	return true;
}

int main()
{
	vector<long int> vec_prime;
	vec_prime.push_back(2);
	int n = 3;
	while(vec_prime.size() < 10001)
	{
		if(isPrime(n))
		{
			vec_prime.push_back(n);
		}
		n++;
	}
	cout << vec_prime[vec_prime.size()-1] << endl;
	return 0;
}