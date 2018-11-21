#include<iostream>

using namespace std;

int main225()
{
	std::ios::sync_with_stdio(false);
	long long t, n, k, i;
	int arr[100000];
	cin >> t;
	while (t--)
	{
		cin >> n;
		int i = 0;
		while (n != 0)
		{			
			k = n % 5;
			if (k == 0)
			{
				arr[i++] = 5;
				n /= 5;
				n--;
				continue;
			}
			else
			{
				arr[i++] = k;				
			}
			n /= 5;
		}
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j] == 1)
				cout << 'm';
			if (arr[j] == 2)
				cout << 'a';
			if (arr[j] == 3)
				cout << 'n';
			if (arr[j] == 4)
				cout << 'k';
			if (arr[j] == 5)
				cout << 'u';
		}
		cout << endl;
	}
	return 0;
}