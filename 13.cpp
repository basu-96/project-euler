#include<iostream>
#include<fstream>
#include<iomanip>
#include<math.h>
#include<cstdlib>
#include<sstream>
#include<vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	ifstream infile;
	infile.open("Problem_13.txt");
	vector<vector<int> > L;
	char c;
	int n;
	while(!infile.eof())
	{
		vector<int> temp;
		if(c == '\n')
		{
			cout << endl;
			continue;
		}
		else
		{
			infile >> c;
			n = c - '0';
			cout << n;
			temp.push_back(n);
		}

		// cout << temp.size() << endl;
		// L.push_back(temp);
	}
	cout << endl;
	return 0;
}