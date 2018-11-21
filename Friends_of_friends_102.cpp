#include<iostream>

using namespace std;

int main102()
{
	std::ios::sync_with_stdio(false);
	int c = 0, n = 0, x = 0, n1 = 0, k = 0;
	bool *arr = new bool[99999999];
	bool *fr = new bool[99999999];
	for (int i = 0; i < 99999999; i++)
	{
		arr[i] = 0;
		fr[i] = 0;
	}
	int arr3[100][102];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr3[i][0];
		fr[arr3[i][0]] = true;
		cin >> arr3[i][1];
		for (int j = 2; j < 2 + arr3[i][1]; j++)
		{
			cin >> arr3[i][j];
			arr[arr3[i][j]] = true;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 2; j < 2 + arr3[i][1]; j++)
		{
			if (arr3[i][j] < 0 || arr3[i][j] >= 99999999)
				throw std::invalid_argument("wrong index in arr3");
			if (arr[arr3[i][j]] == 1 && fr[arr3[i][j]] == 0)
			{
				c++;
				arr[arr3[i][j]] = false;
			}
			/*bool flag = fr[arr3[i][j]];
			if (arr[arr3[i][j]] == 1)
			{
				if (flag == false) 
				{
					c++;
					arr[arr3[i][j]] = false;
				}
			}*/
		}
	}
	cout << c << endl;
	delete arr;
	delete fr;
	cin >> n;
	return 0;
}