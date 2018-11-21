#include<iostream>
#include<math.h>

using namespace std;

int main151()
{
	while(1)
	{
		ios_base::sync_with_stdio(false);
		int n, work = 0;
		cin >> n;
		if (n == 0)
			return 0;
		int *arr = new int[n];
		cin >> arr[0];
		for (int i = 1; i < n; i++)
		{
			cin >> arr[i];
			arr[i] += arr[i - 1];
			work += abs(arr[i - 1]);
		}
		cout << work << endl;
		delete arr;
	}
	return 0;
}