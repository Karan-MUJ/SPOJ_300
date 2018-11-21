/*#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

string aibos;
int aiboarr[6101][6101];

long long aibo(int i, int j)
{
	if (i == j)
	{
		return 0;
	}
	if (i == j - 1)
	{
		return (aibos[i] == aibos[j]) ? (0) : (1);
	}
	if (aiboarr[i][j] != -1)
	{
		return aiboarr[i][j];
	}
	if (aibos[i] == aibos[j])
	{
		return aiboarr[i][j] = aibo(i + 1, j - 1);
	}
	else
	{
		return aiboarr[i][j] = min(aibo(i + 1, j), aibo(i, j - 1)) + 1;
	}
}

int main()
{
	int t;
	memset(aiboarr, -1, sizeof(aiboarr));
	cin >> t;
	while (t--)
	{
		memset(aiboarr, -1, sizeof(aiboarr));
		cin >> aibos;
		cout << aibo(0, aibos.size() - 1) << endl;
	}
	return 0;
}
*/