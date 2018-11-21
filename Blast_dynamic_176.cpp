/*#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int blast[2009][2009];

int main176()
{
	string a, b;
	int k;
	cin >> a >> b >> k;
	for (int i = 0; i < b.length() + 1; i++)
		blast[0][i] = k * i;
	for (int i = 0; i < a.length() + 1; i++)
		blast[i][0] = k * i;
	for (int i = 1; i < a.length() + 1; i++)
	{
		for (int j = 1; j < b.length() + 1; j++)
		{
			blast[i][j] = min(blast[i - 1][j - 1] + (int)abs((double)(a[i - 1] - b[j - 1])), min(blast[i - 1][j], blast[i][j - 1]) + k);
		}
	}	
	cout << blast[a.length()][b.length()] << endl;
	return 0;
}*/