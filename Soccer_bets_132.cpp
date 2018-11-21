#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

int main132()
{
	map <string, bool> appear;
	map <string, bool> lost;
	vector <string> teamnames;
	int t = 0,c ,d;
	cin >> t;
	string a, b;
	while (t--)
	{
		appear.clear();
		lost.clear();
		teamnames.clear();
		for (int i = 0; i < 16; i++) 
		{
			cin >> a >> b >> c >> d;
			if (appear[a] == false)
			{
				teamnames.push_back(a);
					appear[a] = 1;
			}
			if (appear[b] == false)
			{
				teamnames.push_back(b);
				appear[b] = 1;
			}
			if (c < d)
			{
				lost[a] = 1;
			}
			if (c > d)
			{
				lost[b] = 1;
			}
		}
		for (int i = 0; i < 16; i++)
		{
			if (lost[teamnames[i]] == 0)
			{
				cout << teamnames[i] << endl;
				break;
			}
		}
	}
	return 0;
}