/*#include <cstring>
#include <iostream>
#include<algorithm>

using namespace std;

int C[1000], memo[1000][1000];

int solve(int a, int b, int p) 
{
	if (a>b) return 0;
	int &ret = memo[a][b];
	if (ret != -1) return ret;
	if (p == 0) ret = max(C[a] - solve(a + 1, b, 1 - p), C[b] - solve(a, b - 1, 1 - p));
	else 
	{
		if (C[a] >= C[b]) ret = C[a] - solve(a + 1, b, 1 - p);
		else ret = C[b] - solve(a, b - 1, 1 - p);
	}
	return ret;
}

int main() 
{
	int tc = 1, N;
	while (true) 
	{
		cin >> N;
		if (N == 0) break;
		for (int i = 0; i<N; ++i)
			cin >> C[i];
		memset(memo, -1, sizeof(memo));
		cout << "In game " << tc << ", the greedy strategy might lose by as many as "<< solve(0, N - 1, 0) <<" points." << endl;
		++tc;
	}

	return 0;
}*/