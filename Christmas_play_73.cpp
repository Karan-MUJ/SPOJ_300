/*#include<iostream>
#include<algorithm>

using namespace std;

int main73()
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		int n = 0, x = 0, k = 0, d = 0;
		cin >> n >> k;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			arr[i] = x;
		}
		sort (arr, arr + n);
		d = arr[k - 1] - arr[0];
		for (int i = 0; i + k - 1 < n; i++)
		{
			if (arr[i + k - 1] - arr[i] < d)
			{
				d = arr[i + k - 1] - arr[i];
			}
		}
		cout << d << endl;
		delete arr;
	}
	return 0;
}*/