#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

int arr[20][3];

int main121()
{
	int t = 0;
	cin >> t;
	while (t--)
	{		
		int n = 0;
		cin >> n;		
		for (int i = 0; i < n; i++)
		{				
			cin >> arr[i][0] >> arr[i][1] >> arr[i][2];			
		}
		for (int i = n - 2; i >= 0; i--)
		{
			{
				arr[i][0] += min(arr[i + 1][1], arr[i + 1][2]);
			}
				
			{
				arr[i][1] += min(arr[i + 1][0], arr[i + 1][2]);
			}
			 
			{
				arr[i][2] += min(arr[i + 1][0], arr[i + 1][1]);
			}
		}		
		cout << min(min(arr[0][1], arr[0][0]), arr[0][2]) << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= 2; j++)
			{
				arr[i][j] = 0;
			}
		}
	}
	return 0;
}