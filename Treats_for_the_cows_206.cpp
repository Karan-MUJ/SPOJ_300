#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

long long ntftc, tftc[2010] = {0};
long long tftcmem[2010][2010];

long long tftcm(int i, int j, int a)
{
	if (tftcmem[i][j] != -1) 
	{
		return tftcmem[i][j];
	}
	else if (i == j)
	{
		return tftcmem[i][j] = a * tftc[i];
	}
	else
	{
		return tftcmem[i][j] = max(tftcm(i + 1, j, a + 1) + tftc[i] * a, tftcm(i, j - 1, a + 1) + tftc[j] * a);
	}
}

int main206()
{
	memset(tftcmem, -1, sizeof(tftcmem));
	cin >> ntftc;
	for (int i = 0; i < ntftc; i++)
	{
		cin >> tftc[i];
	}
	cout << tftcm(0, ntftc - 1, 1) << endl;
	return 0;
}