#include<iostream>

using namespace std;

//int arr[500001];
bool arr1[99999999];

int main56()
{
	int arr[500001]; //remove
	arr[0] = 0;
	for (int i = 1; i < 500001; i++)
	{
		if (arr[i - 1] - i > 0 && arr1[arr[i - 1] - i] == 0)
		{		
			arr[i] = arr[i - 1] - i;	
			arr1[arr[i]] = 1;
		}
		else
		{
			arr[i] = arr[i - 1] + i;
			arr1[arr[i]] = 1;
		}
	}
	int n = 0, k = 0;
	cin >> n;
	while(n != -1)
	{		
		cout << arr[n] << endl;
		cin >> n;
	}
	return 0;
}