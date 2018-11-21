#include<iostream>

using namespace std;

int main170()
{
	const int max = 100000009;
	int count = 1;
	bool *arr = new bool[max];
	for (int i = 0; i < max; i++)
	{
		arr[i] = false;
	}
	std::ios::sync_with_stdio(false);
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 0;
	cout << '2' << endl;
	for (int i = 2; i * 2 < max; i++)
	{
		arr[2 * i] = 1;
	}
	for (int i = 3; i < 10004; i += 2)
	{
		if (arr[i] == 0)
		{
			count++;
			for (int j = 2; j*i < max; j++)
			{
				arr[i * j] = true;
			}
			if (count % 100 == 1)
			{
				cout << i << endl;
			}
		}
	}
	for (int i = 10004; i < max; i += 2)
	{
		if (arr[i] == 0)
		{
			count++;
			if (count % 100 == 1)
			{
				cout << i << endl;
			}
		}
	}
	delete arr;
	return 0;
}