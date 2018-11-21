#include<iostream>
#include<string>

using namespace std;

int main156()
{
	string s;
	int cas = 1;
	while (cin >> s)
	{
		char last = '0';
		int count = (s[s.size() - 1] == '0') ? (0):(-1);
		bool flag = 0;
		for (int i = s.size() - 1; i > -1; i--)
		{
			if (i < (s.size() - 1))
			{
				last = s[i + 1];
			}
			if (s[i] == '1' && last == '1')
			{
				continue;				
			}
			if (s[i] == '1')
			{
				count+=2;
				flag = 1;
			}
		}
		if (flag == 1)
			cout << "Game #" << cas << ": " << count << endl;
		else
			cout << "Game #" << cas << ": " << '0' << endl;
		cas++;
	}
	return 0;
}