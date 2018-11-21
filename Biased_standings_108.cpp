/*#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	long long t = 0;
	cin >> t;
	while (t--)
	{
		long long n = 0;
		cin >> n;
		string s;
		long long *arr = new long long[n];
		for (long long i = 0; i < n; i++)
		{
			cin >> s;
			cin >> arr[i];
		}
		sort(arr, arr + n);
		long long d = 0;
		for (long long i = 0; i < n; i++)
		{
			d += abs(arr[i] - (i + 1));
		}
		cout << d << endl;
		delete arr;
	}
	return 0;
}*/