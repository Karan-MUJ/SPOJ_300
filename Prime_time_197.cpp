#include<iostream>

using namespace std;

int arrpt[25] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int main197()
{
	std::ios::sync_with_stdio(false);
	int n, c, i1 = 0, max = 0;
	cin >> n;
	int arr[10000] = { 0 };
	for (int i = 2; i <= n; i++)
	{
		i1 = i;
		for (int j = 0; j < 25 && arrpt[j] <= i; j++)
		{			
			c = 0;
			while (i1 % arrpt[j] == 0)
			{
				i1 /= arrpt[j];
				c++;
			}
			arr[arrpt[j]] += c;
			if (arrpt[j] > max)
				max = arrpt[j];
		}		
		if (i1 != 1)
		{
			arr[i1]++;
			if (i1 > max)
				max = i1;
		}		
	}
	for (int i = 2; i <= n; i++)
	{
		if (arr[i] != 0)
		{
			cout << i << '^' << arr[i];
			if (i < max)
			{
				cout << " * ";
			}
		}
	}
	cout << endl;
	return 0;
}