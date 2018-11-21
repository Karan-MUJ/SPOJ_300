#include<iostream>
#include<string>

using namespace std;

int main83()
{
	int yo = 1;
	while (1)
	{
		string s;
		getline(cin, s);
		char minus = '-';
		if (s[0] == minus)
		{
			break;
		}
		char o = '{';
		char c = '}';
		int count = 0, result = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '{')
			{
				count++;
			}
			else if (s[i] == '}')
			{
				count--;
			}
			if (count < 0)
			{
				result++;
				count = 1;
			}
		}
		result += count / 2;
		cout << yo << ". " << result << endl;
		yo++;
	}
	return 0;
}