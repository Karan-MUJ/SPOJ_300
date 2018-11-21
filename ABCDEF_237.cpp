/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	vector <int> l, r;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++) 
			{
				l.push_back(arr[i] * arr[j] * arr[k]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (arr[k] != 0)
					r.push_back((arr[i] + arr[j]) * arr[k]);
			}
		}
	}
	sort(l.begin(), l.end());
	sort(r.begin(), r.end());
	int lo, hi, res = 0;
	for (int i = 0; i < n; i++)
	{
		lo = lower_bound(r.begin(), r.end(), l[i]) - r.begin();
		hi = upper_bound(r.begin(), r.end(), l[i]) - r.begin();
		res += (hi - lo);
	}
	cout << res << endl;
	delete arr;
	return 0;
}*/