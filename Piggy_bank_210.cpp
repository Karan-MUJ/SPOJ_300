#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main210()
{
	int t, we, wf, w, n;
	cin >> t;
	while (t--)
	{
		cin >> we >> wf;
		w = wf - we;
		cin >> n;
		int *val = new int[n];
		int *wt = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> val[i] >> wt[i];
		}
		int *dp = new int[w + 1];
		for (int i = 0; i < w + 1; i++)
		{
			dp[i] = 0;
		}
		for (int i = 1; i <= w; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (wt[j] < i && dp[i - wt[j]] != 0)
				{
					if (dp[i] == 0)
						dp[i] = dp[i - wt[j]] + val[j];
					else
						dp[i] = min(dp[i], dp[i - wt[j]] + val[j]);
				}
				if (wt[j] == i)
				{
					if (dp[i] == 0)
						dp[i] = val[j];
					else
						dp[i] = min(dp[i], val[j]);
				}
			}
		}
		if (!w)
		{
			cout << "The minimum amount of money in the piggy-bank is 0." << endl;
		}
		else if (dp[w])
		{
			cout << "The minimum amount of money in the piggy-bank is " << dp[w] << '.' << endl;
		}
		else
		{
			cout << "This is impossible." << endl;
		}
		delete dp;
		delete val;
		delete wt;
	}
	return 0;
}