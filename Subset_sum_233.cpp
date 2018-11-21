/*#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int arr[35];

int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	long long powerset = 1 << n / 2;
	long long subsetsize = n / 2;
	vector <long long> s1, s2;
	long long sum = 0;
	for (int i = 0; i < powerset; i++)
	{
		for (int j = 0; j < subsetsize; j++)
		{
			if (i & (1 << j))
			{
				sum += arr[j];
			}
		}
		s1.push_back(sum);
		sum = 0;
	}
	if (n % 2)
	{
		subsetsize = (n + 1) / 2;
		powerset = 1 << subsetsize;
	}
	else
	{
		subsetsize = n / 2;
		powerset = 1 << subsetsize;
	}
	for (int i = 0; i < powerset; i++)
	{
		for (int j = 0; j < subsetsize; j++)
		{
			if (i & (1 << j))
			{
				sum += arr[n / 2 + j];
			}
		}
		s2.push_back(sum);
		sum = 0;
	}
	sort(s1.begin(), s1.end());
	vector<long long>::iterator low, high;
	for (int i = 0; i < s2.size(); i++)
	{
		low = lower_bound(s1.begin(), s1.end(), a - s2[i]);
		high = upper_bound(s1.begin(), s1.end(), b - s2[i]);
		sum += (high - low);
	}
	cout << sum << endl;
	return 0;
}*/