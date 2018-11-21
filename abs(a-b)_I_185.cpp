/*#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	long long t, n, x, res, lsum, buf;
	cin >> t;
	vector <long long> arr;
	while (t--)
	{
		res = 0;
		lsum = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			arr.push_back(x);
		}
		for (int i = 1; i < n; i++)
		{
			res += arr[i] - arr[0];
		}
		lsum = res;
		for (int i = 1; i < n; i++)
		{
			lsum = lsum - (n - i) * (arr[i] - arr[i - 1]);
			res += lsum;
		}
		arr.clear();
		cout << res << endl;
	}
	return 0;
}*/