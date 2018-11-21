/*#include<iostream>

using namespace std;

int main169()
{
	std::ios::sync_with_stdio(false);
	long long arr[55];
	long long k, l, idx, max;
	bool flag = true;
	bool sola[1000000];
	bool solb[1000000];
	cin >> k >> l >> idx;
	for (int i = 0; i < idx; i++)
	{
		cin >> arr[i];
		if (flag)
			max = arr[i];
		flag = false;
		if (arr[i] > max)
			max = arr[i];
	}
	sola[0] = 0;
	solb[0] = 1;
	for (int i = 1; i < max + 1; i++)
	{
		while (i < k && i < l)
		{
			if (sola[i - 1] == 0)
			{
				sola[i] = 1;
			}
			else
			{
				sola[i] = 0;
			}
			if (solb[i - 1] == 1)
			{
				solb[i] = 0;
			}
			else
			{
				solb[i] = 1;
			}
			i++;
		}
		if (solb[i - 1] == true || solb[i - k] == true)
			sola[i] = true;
		else
			sola[i] = false;
		if (sola[i - 1] == false || sola[i - l] == false)
			solb[i] = false;
		else
			solb[i] = true;
	}
	for (int i = 0; i < idx; i++)
	{
		if (sola[arr[i] - 1] == 0)
			cout << 'A';
		else
			cout << 'B';
	}
	return 0;
}*/