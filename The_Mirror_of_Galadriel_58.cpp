#include<iostream>
#include<string>

using namespace std;

int main58()
{
	int t = 0, size = 0;
	cin >> t;
	string s;
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		bool stat = true;
		size = s.size() - 1;
		for (int j = 0; j <= s.length()/2; j++)
		{
			if (s[j] != s[size - j])
			{
				stat = false;
				break;
			}
		}
		if (stat == false)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}