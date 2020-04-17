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
	long int bigNum = 1000000;
	long int chainSize[bigNum];
	chainSize[0] = 0;
	chainSize[1] = 1;
	for(long int i = 2; i < bigNum; i++)
	{
		long int seqSize = 1;
		long int t = i;
		do
		{
			if(t < i)
			{
				// cout << seqSize << endl;
				seqSize = seqSize + chainSize[t] - 1;
				// cout << i << "\t" << t << endl;
				t = 1;
				// cout << "break" << endl;
				break;
			}
			else
			{
				if(t % 2 == 0) t = t/2;
				else t = 3*t + 1;
				seqSize++;
			}
			

		}while(t != 1);
		// cout << i << "\t" << seqSize << endl;
		chainSize[i] = seqSize;
	}
	// for (long int i = 0 ; i < bigNum; i++)
	// {
	// 	cout << i << "\t" << chainSize[i] << endl;
	// }
	int maxIndex = 0;
	for(int i = 1; i < bigNum; i++)
	{
		if(chainSize[maxIndex] < chainSize[i])
		{
			maxIndex = i;
		}
	}
	cout << maxIndex << endl;
	return 0;
}


/*
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
*/