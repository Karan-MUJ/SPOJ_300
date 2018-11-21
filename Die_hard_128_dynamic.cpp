/*#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int arr[1500][1500];

int solve(int a, int b)
{
	if (a <= 0 || b <= 0)
		return -1;
	else
		arr[a][b] = max(solve(a - 17, b + 7) + 2, solve(a - 2, b - 8) + 2);
	return arr[a][b];
}

int main128()
{
	int n, a, b;
	cin >> n;
	memset(arr, -1, sizeof(arr));
	arr[0][0] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << solve(a, b) << endl;		
	}
	return 0;
}*/