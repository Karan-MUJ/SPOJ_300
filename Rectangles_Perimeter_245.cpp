#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main245()
{
	int n, x;
	int dp[1009][2], a[1009], b[1009];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}
	dp[0][0] = a[0];
	dp[0][1] = b[0];
	for (int i = 1; i < n; ++i) 
	{
		dp[i][0] = a[i] + max(dp[i - 1][0] + abs(b[i] - b[i - 1]), dp[i - 1][1] + abs(b[i] - a[i - 1]));
		dp[i][1] = b[i] + max(dp[i - 1][0] + abs(a[i] - b[i - 1]), dp[i - 1][1] + abs(a[i] - a[i - 1]));
	}
	cout << max(dp[n-1][0],dp[n-1][1]) << endl;	
	return 0;
}