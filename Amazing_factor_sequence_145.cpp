/*#include<iostream>

using namespace std;

#define size 1000000
#define ll long long

ll arr[size];
ll arr1[size];

int main()
{
	for (int i = 2; i < size; i++)
	{
		arr[i] = 1;
	}
	for (int i = 2; i < size; i++)
	{
		for (int j = 2; i*j < size; j++)
		{
			arr[i*j] += i;
		}
	}
	arr1[0] = 0;
	arr1[1] = 0;
	for (int i = 2; i < size; i++)
	{
		arr1[i] = arr1[i - 1] + arr[i];
	}
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << arr1[n] << endl;
	}
	return 0;
}*/