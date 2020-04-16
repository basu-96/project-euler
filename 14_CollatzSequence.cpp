#include<iostream>
#include<fstream>
#include<iomanip>
#include<math.h>
#include<cstdlib>
#include<sstream>
#include<vector>
#include <algorithm>
#include<numeric>
#include <iterator>

using namespace std;

int main()
{
	long int n = 1000000, fof[n], max;
	fof[0] = 0;
	fof[1] = 1;
	max = 1;
	for (long int i = 2; i < n; i++)
	{
		long int chain = 1;
		long int j = i;
		do
		{	
			if (j < i)
			{
				chain = chain + fof[j] - 1;
				j = 1;
				break;
			}else{
				if (j%2 == 0)
				{
					j = j/2;
				}else{
					j = 3*j + 1;
				}
				chain = chain + 1;
			}
		} while (j!=1);
		fof[i] = chain;
		if (fof[i] >= fof[max])
		{	
			max = i;
			cout << max << "\t" << fof[max] << endl;
		}
		// cout << fof[77031] <<endl;
	}
	return 0;
}
