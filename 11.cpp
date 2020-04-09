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
	ifstream matrix{"Problem_11.txt"};

	vector<vector<int> > M;
	string temp;
	while(getline(matrix, temp))
	{
		istringstream buffer(temp);
		vector<int> line((istream_iterator<int>(buffer)), istream_iterator<int>());
		M.push_back(line);
	}
	int mat_size = M.size();
	// Checking products vertically
	int vert_prod = 1;
	int horz_prod = 1;
	int diag_prod = 1;
	for(int i = 0; i < mat_size; i++)
	{
		for(int j = 0; j < mat_size - 3; j++)
		{
			int temp;
			temp = M[i][j] * M[i][j+1] * M[i][j+2] * M[i][j+3];
			// cout << M[i][j] << " " << M[i][j+1] << " " << M[i][j+2] << " " << M[i][j+3] << "\t" << temp << endl;
			if(vert_prod < temp) vert_prod = temp;

			temp = M[j][i] * M[j+1][i] * M[j+2][i] * M[j+3][i];
			// cout << M[j][i] << " " << M[j+1][i] << " " << M[j+2][i] << " " << M[j+3][i] << "\t" << temp << endl;
			if(horz_prod < temp) horz_prod = temp;

		}
	}
	for(int i = 0; i < mat_size - 3; i++)
	{
		for(int j = 0; j < mat_size - 3; j++)
		{
			int temp;
			temp = M[i][j] * M[i+1][j+1] * M[i+2][j+2] * M[i+3][j+3];
			// cout << M[i][j] << " " << M[i+1][j+1] << " " << M[i+2][j+2] << " " << M[i+3][j+3] << "\t" << temp << endl;
			if(diag_prod < temp) diag_prod = temp;
			// cout << diag_prod << endl;
		}
	}
	// cout << endl;
	cout << max(vert_prod,max(horz_prod,diag_prod)) << endl;
	return 0;
}