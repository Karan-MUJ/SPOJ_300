#include<iostream>
#include<algorithm>

using namespace std;

int main149()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n, k = 0;
		cin >> n;
		bool *check = new bool[n];
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			check[i] = 0;
		}
		sort(arr, arr + n);
		for (int i = 0; i < n; i++)
		{
			if (arr[i] % 2 == 0 && check[i] != 1)
			{
				for (int j = 0; arr[j] < arr[i]/2 + 1; j++)
				{
					if (arr[j] * 2 == arr[i] && check[j] == false)
					{
						check[i] = 1;
						check[j] = 1;
						k++;
						break;						
					}
				}
			}
		}
		cout << k << endl;
		delete arr;
		delete check;
	}
	return 0;
}