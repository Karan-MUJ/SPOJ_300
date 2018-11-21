#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main122()
{
	int c = 1;
	while (true)
	{
		int n = 0;
		cin >> n;
		if (n == 0)
			break;
		//vector<vector<int>> arr;
		//arr.resize[n];
		int arr[100000][3];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
		}
		/*for (int i = 0; i < n; i++)
		{
			arr[i].resize(3);
		}*/
		/*for (int i = n - 2; i >= 1; i++)
		{
			arr[i][0] += min(arr[i + 1][0], arr[i + 1][1]);
			arr[i][1] += min(min(arr[i + 1][0], arr[i + 1][1]), arr[i + 1][2]);
			arr[i][2] += min(arr[i + 1][1], arr[i + 1][2]);
		}*/
		arr[n - 1][0] += arr[n - 1][1];
		arr[n - 2][2] += arr[n - 1][1];
		arr[n - 2][1] += min(min(arr[n - 2][2], arr[n - 1][1]), arr[n - 1][0]);
		arr[n - 2][0] += min(min(arr[n - 2][1], arr[n - 1][1]), arr[n - 1][0]);
		for (int i = n-3; i >= 1 && n > 2; i--)
		{
			arr[i][2] += min(arr[i + 1][1], arr[i + 1][2]);
			arr[i][1] += min(min(min(arr[i + 1][0], arr[i + 1][1]), arr[i + 1][2]), arr[i][2]);
			arr[i][0] += min(min(arr[i + 1][0], arr[i + 1][1]), arr[i][1]);
		}
		if (n > 2)
		{
			arr[0][2] += min(arr[1][1], arr[1][2]);
			arr[0][1] += min(min(min(arr[0][2], arr[1][2]), arr[1][1]), arr[1][0]); 
		}
		cout << c << ". " << arr[0][1] << endl;
		c++;
		for (int i = 0; i < n; i++)
		{
			arr[i][0] = 0;
			arr[i][1] = 0;
			arr[i][2] = 0;
		}		
	}
	return 0;
}