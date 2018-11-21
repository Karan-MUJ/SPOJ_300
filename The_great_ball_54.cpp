#include<iostream>
#include<algorithm>

using namespace std;

int main54()
{
	int t = 0; 
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n = 0, x = 0, c = 0, sumt = 0, sum = 0;
		cin >> n;
		int *entry = new int[n];
		int *exit = new int[n];
		for (int v = 0; v < n; v++)
		{
			cin >> x;
			entry[v] = x;
			cin >> x;
			exit[v] = x;
		}
		sort(entry, entry + n);
		sort(exit, exit + n);
		for (int j = 0; j < n; j++)
		{
			sumt = 0;
			for (int k = 0; exit[k] < exit[j] && k < n; k++)
			{
				sumt--;
			}
			for (int l = 0; entry[l] < exit[j] && l < n; l++)
			{
				sumt++;
			}
			if (sumt > sum)
			{
				sum = sumt;
			}
		}
		cout << sum << endl;
		cout << endl;
	}
	return 0;
}