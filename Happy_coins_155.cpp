#include<iostream>
#include<string>

using namespace std;

int main155()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, c1 = 0, c2 = 0;
		cin >> n;
		string s1 = "lxh";
		string s2 = "hhb";
		string s;
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			if (s == s1)
			{
				c1++;
			}
			else
			{
				c2++;
			}
		}
		if (c1 % 2 == 1)
		{
			cout << "lxh" << endl;
		}
		else
		{
			cout << "hhb" << endl;
		}
	}
	return 0;
}
