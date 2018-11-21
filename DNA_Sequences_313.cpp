/*#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int lcs[1001][1001], cmn[1001][1001];

int main()
{
	int k;
	string s1, s2;
	cin >> k;
	while (k)
	{
		cin >> s1 >> s2;
		cmn[0][0] = 0;
		int l1 = s1.size();
		int l2 = s2.size();
		for (int i = 0; i < 1001; i++)
		{
			lcs[0][i] = lcs[i][0] = 0;
		}
		for (int i = 1; i <= l1; i++)
			for (int j = 1; j <= l2; j++)
			{
				lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
				if (s1[i - 1] == s2[j - 1])
				{
					cmn[i][j] = cmn[i - 1][j - 1] + 1;
				}
				else
				{
					cmn[i][j] = 0;
				}
				if (cmn[i][j] >= k)
				{
					for (int z = k; z <= cmn[i][j]; z++)
					{
						lcs[i][j] = max(lcs[i][j], lcs[i - z][j - z] + z);
					}
				}
			}
		cout << lcs[l1][l2] << endl;
		cin >> k;
	}
	return 0;
}*/