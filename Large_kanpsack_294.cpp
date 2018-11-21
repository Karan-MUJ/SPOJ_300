/*#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

typedef long long int ll;

const int mx = 510;

ll value[mx];
ll weight[mx];

ll knapsack(ll CAP, ll n) 
{
	vector <ll> dp(CAP + 1);
	for (ll i = 0; i < n; i++) 
	{
		for (ll a = CAP; a >= weight[i]; --a) 
		{
			dp[a] = max(dp[a], dp[a - weight[i]] + value[i]);
		}
	}
	return dp[CAP];
}

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll CAP, N;
	cin >> CAP >> N;	
	for (ll i = 0; i < N; i++) 
	{
		cin >> value[i] >> weight[i];
	}
	cout << knapsack(CAP, N) << endl;
	return 0;
}*/