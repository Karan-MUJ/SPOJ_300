#include<iostream>
#include<math.h>

using namespace std;

//5
int main5()
{
	const int max = 31624;
	bool p[31623];
	for (int i = 0; i < max; i++)
	{
		p[i] = true;
	}
	for (int i = 2; i < max; i++)
	{
		if (p[i] == true)
		{
			for (int j = 2; i*j < 31623; j++)
			{
				p[i*j] = false;
			}
		}
	}
	int t = 0;
	cin >> t;
	for (int z = 0; z < t; z++)
	{
		int m, n;
		cin >> m >> n;
		bool *arr = new bool [(n - m) + 1];
		for (int i = 0; i < n-m+1; i++)
		{
			arr[i] = true;
		}
		for (int i = 2; i <= pow(n,.5); i++)
		{
			if (p[i] == true)
			{
				for (int j = 0; j < n-m+1; j++)
				{
					if (arr[j] != false && (m + j) % i == 0 && (m+j) != i)
					{
						arr[j] = false;
					}
				}
			}
		}
		for (int i = 0; i < n-m+1; i++)
		{
			if (arr[i] == true && m+i != 1)
			{
				cout << m + i << endl;
			}
		}
	}
	return 0;
}