/*#include <iostream>

using namespace std;

int main242()
{
	int arr[31];
	arr[0] = 1;
	arr[1] = 0;
	arr[2] = 3;
	arr[3] = 0;
	for (int i = 4; i < 31; i++) 
	{
		arr[i] = arr[i - 2] * 4 - arr[i - 4]; //Explaination - https://stackoverflow.com/questions/16388579/spoj-m3tile-solution-explanation/16388865#16388865
	}
	int n;
	while (1)
	{
		cin >> n;
		if (n == -1) 
		{
			break;
		}
		cout << arr[n] << endl;
	}
	return 0;
}*/