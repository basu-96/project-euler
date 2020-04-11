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
	ifstream infile;
	infile.open("Problem_13.txt"); // Problem_13.txt contains the big number as given in the problem statement
	vector<vector<int> > L;
	vector<int> S;
	while(!infile.eof())
	{
		vector<int> temp;
		string str;
		getline(infile, str);
		for(int i = 0; i < str.length(); i++)
		{
			temp.push_back(str[i]-'0');
		}
		L.push_back(temp);
	}
	int carry = 0;
	int sum = 0;
	for(int i = 49; i >= 0; i--)
	{
		vector<int> temp;
		for(int j = 0; j < 100; j++)
		{
			temp.push_back(L[j][i]);
		}
		// cout << temp.size() << endl;
		sum = accumulate(temp.begin(), temp.end(), carry);
		// cout << sum << endl;
		S.push_back(sum%10);
		carry = (sum - sum%10)/10;
	}
	string str = to_string(sum);
	for(int i = str.length()-2; i >= 0; i--)
	{
		S.push_back(str[i]-'0');
	}
	for(int i = S.size()-1; i >= S.size()-10; i--)
	{
		cout << S[i];
	}
	cout << endl;
	return 0;
}