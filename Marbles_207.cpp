#include <iostream>

using namespace std;

long long marbles(int n, int m) 
{
	if (m>n - m) m = n - m;

	long long ans = 1;

	for (int i = 0; i<m; i++) ans = ans * (n - i) / (i + 1);

	return ans;
}

int main207() 
{
	int t, n, k;
	cin >> t;
	for (int tc = 1; tc <= t; tc++) 
	{
		cin >> n >> k;
		cout << marbles(n - 1, k - 1) << endl;
	}

	return 0;
}