#include<iostream>
#include<string>

using namespace std;

int main82()
{
	std::ios::sync_with_stdio(false);
	int t, lastl = 0, maxc = 0, currc = 0, currl = 0;
	cin >> t;
	string s;
	while (t--)
	{
		int lastl = 0, maxc = 0, currc = 0, currl = 0;
		ws(cin);
		getline(cin, s);
		for (int i = 0; i < s.size(); i++)
		{
			currl = 0;
			while (i < s.size() && s[i] != ' ' && s[i] != '	')
			{
				currl++;
				i++;
			}
			if (currl == lastl)
			{
				currc++;
			}
			else
			{
				if (currc > maxc)
					maxc = currc;
				currc = 1;
			}
			lastl = currl;
		}
		if (currc > maxc)
			cout << currc << endl;
		else
			cout << maxc << endl;
	}
	return 0;
}