// Largest palindrome product
// https://projecteuler.net/problem=4
// largest palindrome made from the product of two n-digit numbers
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int unitd(int q);
int palindrome(int p);
int main()
{	
	int j, p;
	for (int sum = 0; sum < 100; sum++)
	{
		for (int i = 0; i <= (sum+sum%2)/2; i++) /*considering only the lower triangle*/
		{
			j = sum -i;
			p = (999-i)*(999-j);
			if (palindrome(p)==1)
			{
				cout << 999-i << "x" << 999-j << " = " << p << endl;
				sum = 100;
				break;
			}
		}
	}
	return 0;
}
// Function to check whether a 6 digit number is a palindrome
int palindrome(int p){
	int x[6];
	for (int i = 0; i < 4; i++)
	{
		x[i] = unitd(p);
		p = (p - x[i])/10;
	}
	if (x[2]==x[3])
	{
		x[4] = unitd(p);
		p = (p-x[4])/10;
		if (x[4]==x[1] && p == x[0])
		{
			return 1;
		}
		return 0;
	}
	return 0;
}
int unitd(int q){
	return q%10;
}