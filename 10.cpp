#include<iostream>
#include<algorithm>
#include<cmath>
#include<ctime>
#include<cstring>

using namespace std;
// time_t tstart, tend; 
time_t tstart = time(0);

int main()
{
	int n = 12;
	bool prime[n];
	int sum = 0;
	memset(prime, true, sizeof(prime));
	prime[0] = false;
	prime[1] = false;
	for(int p = 2; p*p < n; p++)
	{
		if(prime[p])
		{
			for(int i = p*p; i < n; i = i+p)
			{
				prime[i] = false;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(prime[i])
		{
			sum = sum + i;
			// cout << i << "\t";
		}
	}
	// cout << endl;
	cout << sum << endl;
	// ############################################
	time_t tend = time(0);
	cout << "Execution time " << difftime(tend, tstart) << " seconds" << endl;
	return 0;
}