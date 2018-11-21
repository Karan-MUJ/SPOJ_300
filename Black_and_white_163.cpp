/*#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s, t;
	while (1)
	{
		std::ios::sync_with_stdio(false);
		cin >> s;
		cin >> t;
		bool state = 0;
		if (s[0] == '*')
			return 0;
		int count = 0;
		for (int i = 0;i < s.size(); i++)
		{
			if (s[i] == t[i] && state == 1)
			{				
				state = 0;
			}
			else if (s[i] == t[i] && state == 0)
			{
				continue;
			}
			else if (s[i] != t[i] && state == 1)
			{
				continue;
			}
			else
			{
				state = 1;
				count++;
			}
		}
		cout << count << endl;
	}
}*/