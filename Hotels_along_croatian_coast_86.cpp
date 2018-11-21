#include<iostream>

using namespace std;

int main86()
{
	long n = 0, m = 0, sum = 0, x = 0, f = 0, l = 0, max = 0;
	std::ios::sync_with_stdio(false);
	cin >> n >> m;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr[i] = x;
	}
	sum = arr[0];
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] <= m)
		max = arr[i];
	}
	while(f < n)
	{
		f++;
		sum += arr[f];
		if (sum > m)
		{
			while (sum > m)
			{
				sum -= arr[l];
				l++;
			}
		}
		if (sum > max)
		{
			max = sum;
		}
	}
	cout << max << endl;
	delete arr;	
	return 0;
}