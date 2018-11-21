#include<iostream>
#include<algorithm>

using namespace std;

int main49()//49
{
	int n = 0, k = 0, x = 0, count = 0;
	cin >> n >> k;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr[i] = x;
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] + k > arr[n-1])
		{
			break;
		}
		if (binary_search(arr, arr + n, arr[i] + k))
			count++;
	}
	cout << count << endl;
	delete arr;
	//cin >> n;
	return 0;
}