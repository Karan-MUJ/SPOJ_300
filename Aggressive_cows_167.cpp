/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	vector <long long> arr;
	while (t--)
	{
		long long n, c, x, min = 1000000009, max = 0, last, mind = 0, sol;
		cin >> n >> c;
		bool lastc = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			arr.push_back(x);						
			if (x > max)
			{
				max = x;
			}
			if (x < min)
			{
				min = x;
			}			
		}
		sort(arr.begin(), arr.end());
		mind = arr[1] - arr[0];
		for (int i = 2; i < n; i++)
		{
			if (arr[i] - arr[i - 1] < mind)
			{
				mind = arr[i] - arr[i - 1];
			}
		}
		bool flag = false;
		long long lo = mind, hi = (((max - min + 1) - c) / (c - 1)) + 1, mid;
		while (lo < hi)
		{
			mid = lo + (hi - lo + 1) / 2;			
			long long lastelement = arr[0], count = 1;
			flag = false;
			for (int i = 1; i < n && flag != true; i++)
			{
				if (arr[i] - lastelement >= mid)
				{
					count++;
					lastelement = arr[i];
				}
				if (count == c)
				{
					flag = true;
					break;
				}
			}
			if (flag)
			{
				lo = mid;
			}
			else 
			{
				hi = mid - 1;
			}
		}
		cout << lo << endl;
		arr.clear();
	}
	return 0;
}*/