#include<iostream>

using namespace std;

int main165()
{
	int t = 0; 
	cin >> t;
	int arr[210][210];
	bool state = false;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
		bool state;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{		
				state = false;
				for (int k = 0; k < n; k++)
				{
					if (k != i && k != j && (arr[i][j] == arr[i][k] + arr[k][j]))
					{
						state = true;
						break;
					}
				}
				if (!state)
					cout << i + 1 << ' ' << j + 1 << endl;
			}
		}
	}
	return 0;
}