#include<iostream>
#include<algorithm>

using namespace std;

long long t9, n9, k9;

bool solve(long long arr[], long long mid)
{
	long long k1 = k9;
	for (long long i = 0; i < n9; i++)
	{
		k1 -= arr[i] / mid;
		if (k1 <= 0)
			return 1;
	}
	return 0;
}

long long bs(long long arr[])
{
	long long lo = 1, hi = arr[0] + 1, mid;
	while (lo < hi)
	{
		mid = lo + ((hi - lo + 1)/2);
		if (solve(arr, mid))
			lo = mid;
		else
			hi = mid - 1;
	}
	return lo;
}

int main174()
{
	std::ios::sync_with_stdio(false);
	cin >> t9;
	while (t9--)
	{
		cin >> n9 >> k9;		
		long long *arr = new long long[n9];
		for (int i = 0; i < n9; i++)
			cin >> arr[i];
		sort(arr, arr + n9, greater <long long>());		
		cout << bs(arr) << endl;
		delete arr;
	}
	return 0;
}