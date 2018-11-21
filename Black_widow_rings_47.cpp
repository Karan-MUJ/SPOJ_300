/*#include<iostream>

using namespace std;

int main()
{
	int n, t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int x = 0;
		cin >> n;
		int *arr = new int[n];
		int *arr1 = new int[n];
		bool stat = false;
		for (int j = 0; j < n; j++)
		{
			cin >> x;
			arr[j] = x;
			cin >> x;
			arr1[j] = x;
		}
		for (int j = 0; j < n; j++)
		{
			int c = 0;
			for (int k = 0; k < n; k++)
			{
				if (j != k && arr[j] > arr1[k])
					c++;
			}
			if (c == n-1)
			{
				cout << j+1 << endl;
				stat = true;
				break;
			}
		}
		if (!stat)
			cout << "-1" << endl;
		delete arr;
		delete arr1;
	}	
	return 0;
}*/