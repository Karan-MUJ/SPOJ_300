#include<iostream>

using namespace std;

int main15()
{
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= sqrt(n) + 1; i++)
	{
		for (int j = i; j <= n; j++)
		{
			if (i*j <= n)
				sum++;
			else
				continue;
		}
	}
		cout << sum;
		//cin >> n;
	
	return 0;
}