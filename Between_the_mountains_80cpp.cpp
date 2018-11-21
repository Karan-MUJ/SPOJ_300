/*#include<iostream>

using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		int m = 0, n = 0, x = 0, d = 0, d1 = 0;
		cin >> m;
		int arr[1000];
		int arr1[1000];
		for (int i = 0; i < m; i++)
		{
			cin >> x;
			arr[i] = x;
		}
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			arr1[i] = x;
		}
		d = abs(arr[0] - arr1[0]);		
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (abs(arr[i] - arr1[j]) < d)
					d = abs(arr[i] - arr1[j]);
			}
		}
		cout << d << endl;
	}
	return 0;
}*/