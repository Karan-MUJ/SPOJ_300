#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main160()
{
	while (1) 
	{
		int r, c;
		cin >> r >> c;
		if (r == 0 && c == 0)
		{
			break;
		}
		int posr, posc;
		cin >> posr >> posc;
		posr -= 1;
		posc -= 1;
		vector<vector<int> > matrix(r);
		for (int i = 0; i < r; i++)
		{
			matrix[i].resize(c);
		}
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cin >> matrix[i][j];
			}
		}
		int p = matrix[posr][posc];
		for (int i = r - 2; i >= posr; i--)
		{
			matrix[i][c - 1] += matrix[i + 1][c - 1];
		}
		for (int i = c - 2; i >= posc; i--)
		{
			matrix[r - 1][i] += matrix[r - 1][i + 1];
		}
		for (int i = r - 2; i >= posr; i--)
		{
			for (int j = c - 2; j >= posc; j--)
			{
				matrix[i][j] += min(matrix[i][j + 1], matrix[i + 1][j]);
			}
		}
		p -= min(matrix[posr][posc + 1], matrix[posr + 1][posc]);
		if (p < 0)
		{
			cout << 'N' << endl;
		}
		else
		{
			cout << 'Y' << ' ' << p << endl;
		}
	}
	return 0;
}