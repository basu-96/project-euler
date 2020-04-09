// Multiples of a and b
// https://projecteuler.net/problem=1
// sum of all the multiples of 3 or 5 below 1000.
#include <iostream>
#include <stdio.h>

using namespace std;

int nsum(int n); 
int main()
{
	int a, b, N, p, q, r, sum;
	a = 3;
	b = 5;
	N = 1000-1;
	p = N/a;
	q = N/b;
	r = N/(a*b);
	sum = 0;
	cout << p << "\t" << q << "\t" << r << endl;
	cout << a*nsum(p) + b*nsum(q) - a*b*nsum(r) << endl;
	return 0;
}
int nsum(int n){
	return n*(n+1)/2;
}