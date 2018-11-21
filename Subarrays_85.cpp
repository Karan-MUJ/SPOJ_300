#include<iostream>

using namespace std;

int maxk (int a, int k, int arr[])
{
	int max = arr[a];
	for (int i = a; i < a + k; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

int main85()
{
	int n = 0, k = 0, x = 0, max = 0, index = 0;
	cin >> n;
	int *arr = new int [n];
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr[i] = x;
	}
	cin >> k;
	max = maxk(0, k, arr);
	cout << max << " ";
	index++;
	while(index + k - 1 < n)
	{
		if (arr[index + k - 1] > max)
		{
			max = arr[index + k - 1];
			index++;
			cout << max << " ";
			continue;
		}
		if (arr[index-1] == max)
		{
			max = maxk(index, k, arr);
			index++;
			cout << max << " ";
			continue;
		}
		cout << max << " ";
		index++;
	}	
	delete arr;
	return 0;
}