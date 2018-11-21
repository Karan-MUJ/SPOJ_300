/*#include<iostream>
#include<algorithm>

using namespace std;

int main()  //43
{
	const int d = 1422;
	int n = 0;
	for(int p = 0;;p++)
	{
		cin >> n;
		if (n == 0)
			break;
		int *arr = new int[n];
		int c = 0;
		for (int i = 0; i < n; i++)
		{
			int t = 0;
			cin >> t;
			arr[i] = t;
		}
		sort(arr, arr + n);
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j+1] - arr[j] > 200)
			{
				cout << "IMPOSSIBLE" << endl;
				c++;
				break;				
			}
		}
		if ((d - arr[n-1]) > 100 && c == 0)
		{
			cout << "IMPOSSIBLE" << endl;
			c++;
			continue;
		}
		if (c == 0)
		cout << "POSSIBLE" << endl;
	}
	return 0;
} */