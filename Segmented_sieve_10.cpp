#include<iostream>

using namespace std;

int main10()
{
	bool arr[31635];
	arr[0] = 0;
	arr[1] = 0;
	for (int j = 2; j < 179 & arr[j] == true; j++)
	{		
		for (int i = j+1; i <= 31634; i++)
		{
			if (arr[i] % j == 0)
			{
				arr[i] = false;
				continue;
			}
		}
	}
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int m, n;
		cin >> m >> n;
		int arr1[100000] = { m };
		for (int i = 1; i <= n-m; i++)
		{
			arr1[i] = arr1[i - 1] + 1;
		}
		for (int i = 0; i <= n-m; i++)
		{
			for (int j = 0; j < sizeof(arr) && arr[j] == true && j <= sqrt(n) + 1; j++)
			{

			}
		}
	}
	return 0;
}