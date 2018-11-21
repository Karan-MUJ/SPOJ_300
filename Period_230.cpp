#include<iostream>
#include<string>
#include<cstring>
#define sz 1000000

using namespace std;

int main230()
{
	int T, L;
	cin >> T;
	string s;	
	for (int tc = 1; tc <= T; ++tc)
	{
		cin >> L >> s;
		int *prd = new int[L];
		prd[0] = 0;
		cout << "Test case #" << tc << endl;
		for (int i = 1, pos = 0; i < L; ++i)
		{
			pos = prd[i - 1];
			while (pos > 0 && s[pos] != s[i])
			{
				pos = prd[pos - 1];
			}
			if (s[pos] == s[i])
			{
				++pos;
			}
			prd[i] = pos;
			if (pos > 0 && (i + 1) % (i + 1 - pos) == 0)
			{
				cout << i + 1 << ' ' << (i + 1) / (i + 1 - pos) << endl;
			}
		}
	}
		puts("");
	return 0;
}