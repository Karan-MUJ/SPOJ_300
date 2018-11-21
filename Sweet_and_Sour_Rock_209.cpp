#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;

int main209()
{
	std::ios::sync_with_stdio(false);
	int t, n;
	cin >> t;
	string s;
	int b[210];
	int a[210];
	while (t--)
	{
		memset(b, 0, sizeof(b));
		memset(a, 0, sizeof(a));
		cin >> n >> s;		
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0')
				a[i] = 0;
			else
				a[i] = 1;
		}
		b[0] = 0;
		b[1] = a[0];
		for (int i = 2; i <= n; i++)
		{
			int temp = 0;
			b[i] = b[i - 1];
			for (int j = i; j > 0; j--)
			{
				if (a[j - 1] == 1)
					temp++;
				else
					temp--;
				if (temp > 0)
				{
					b[i] = max(b[i], i - j + 1 + b[j - 1]);
				}
			}
		}
		cout << b[n] << endl;
	}
	return 0;
}