#include<iostream>
#include<algorithm>

using namespace std;

int main101()
{
	std::ios::sync_with_stdio(false);
	while (true) 
	{
		int n = 0, c = 0;
		cin >> n;
		if (n == 0)
			break;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int currenti = -1, currentj = -1;
		for (int i = 0; i < n; i++)
		{
			/*if (currenti == arr[i])
			{
				continue;
			}
			else
			{
				currenti = arr[i];
			}*/
			for (int j = i + 1; j < n; j++)
			{
				/*if (currentj == arr[j])
					continue;
				else
					currentj = arr[j];*/
				c += n - (lower_bound(arr, arr + n, arr[i] + arr[j] + 1) - arr);
			}
		}
		cout << c << endl;
		delete arr;
	}

	return 0;
}