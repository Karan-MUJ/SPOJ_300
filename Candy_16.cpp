/*#include<iostream>

using namespace std;

int main16 ()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long avg = 0, count = 0, n = 0, in = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> in;
			avg += in;
			avg %= n;
		}
		count = avg / n;
		if (count*n == avg)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}*/