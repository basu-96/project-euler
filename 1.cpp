#include <cmath>//find the sum of multiples of 3 and 5 which are less than a given number.
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N = 1000;
    int sum = 0;
    for(int i = 1; i < N; i++)
    {
        if (i % 3 == 0 || i % 5 ==0)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}