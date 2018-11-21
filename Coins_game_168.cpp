/*#include<iostream>

using namespace std;

int main168()
{
	std::ios::sync_with_stdio(false);
	long long arr[55];
	long long k, l, m, max;
	bool flag = true;
	bool sol[1000000];
	cin >> k >> l >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
		if (flag)
			max = arr[i];
		flag = false;
		if (arr[i] > max)
			max = arr[i];
	}
	sol[0] = 1;
	sol[1] = 0;
	for (int i = 2; i < max + 1; i++)
	{		
		if (sol[i - 1] == true || (i >= k && sol[i - k] == true) || (i >= l && sol[i - l] == true))
		{
			sol[i] = false;
		}
		else
			sol[i] = true;
	}
	for (int i = 0; i < m; i++)
	{
		if (sol[arr[i]] == 0)
			cout << 'A';
		else
			cout << 'B';
	}
	return 0;
}*/