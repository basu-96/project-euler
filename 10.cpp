#include<iostream>
#include<algorithm>
#include<cmath>
#include<ctime>

using namespace std;
// time_t tstart, tend; 
time_t tstart = time(0);
bool isPrime(long int n)
{
	if (n <= 1) return false;

	for(long int i = 2; i < n-1; i++)
	{
		if(n%i == 0) return false;
	}
	return true;
}

int main()
{
	long int N = 2000000;
	long int sum = 0;
	sum = sum + 2;
	for(long int i = 3; i < N; i = i + 2)
	{
		cout << i << endl;
		if(isPrime(i))
		{
			sum = sum + i;
		}
	}
	cout << endl;
	cout << sum << endl;
	time_t tend = time(0);
	cout << "Execution time " << difftime(tend, tstart) << " seconds" << endl;
	return 0;
}