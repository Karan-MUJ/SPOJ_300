#include<iostream>

using namespace std;

int main08()
{
	int t = 0;
	cin >> t;
	for (int z = 0; z < t; z++)
	{
		int arr[200] = { 1 };
		int n = 0, copy = 0, index = 1, temp = 0, j;
		cin >> n;		
		for (int i = 2; i <= n; i++)
		{
			temp = 0;
			for (j = 0; j < index; j++)
			{
				copy = arr[j] * i + temp;
				arr[j] = copy % 10;
				temp = copy/10;
			}
			while (temp)
			{
				arr[j] = temp % 10;
				temp /= 10;
				index++;
				j++;
			}
		}
		for (--index; index >= 0; index--)
		{
			cout << arr[index];
		}
		cout << endl;
	}
	return 0;
}