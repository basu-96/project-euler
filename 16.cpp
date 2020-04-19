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
	int expNum = 1000;
	vector<int> prodDigit;
	prodDigit.push_back(pow(2,0));
	// cout << prodDigit.size() << endl;
	for(int i = 1; i <= expNum; i++)
	{
		int carry = 0;
		int arrSize = prodDigit.size();
		for(int j = 0; j < arrSize; j++)
		{
			int temp = 2*prodDigit[j] + carry;
			// cout << temp << endl;
			if (9 < temp)
			{
				prodDigit[j] = temp % 10;
				carry = temp / 10;
				if(j == arrSize-1)
				{
					// cout << carry << endl;
					prodDigit.push_back(carry);
				}
			}
			else
			{
				carry = 0;
				prodDigit[j] = temp;
			}
		}
	}
	// cout << prodDigit.size() << endl;
	cout << accumulate(prodDigit.begin(),prodDigit.end(),0) << endl;
	return 0;
}