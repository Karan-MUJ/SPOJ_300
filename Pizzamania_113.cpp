#include<iostream>
#include<algorithm>

using namespace std;

int main113()
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		int n = 0, p = 0;
		cin >> n >> p;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int c = 0;
		sort(arr, arr + n);
		for (int i = 0; i < n; i++)
		{
			if (binary_search(arr, arr + n, p - arr[i]))
			{
				c++;
			}
		}
		cout << c/2 << endl;
	}
	return 0;
}