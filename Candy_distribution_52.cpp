/*#include<iostream>
#include<algorithm>
#include <functional>

using namespace std;

int main52()//52
{
	while(2)
	{
		long long n = 0, sum = 0, x = 0;
		cin >> n;
		if (n == 0)
			break;
		long long *arr = new long long[n];
		long long *arr1 = new long long[n];
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			arr[i] = x;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			arr1[i] = x;
		}
		sort(arr1, arr1 + n, greater<>());
		sort(arr, arr + n);
		for (int i = 0; i < n; i++)
		{
			sum += arr[i] * arr1[i];
		}
		cout << sum << endl;
		delete arr;
		delete arr1;
	}
	return 0;
}*/