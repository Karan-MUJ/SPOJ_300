/*#include <iostream>
#include <algorithm>
#include<string>

using namespace std;

string s;
int i = 0;

int bint()
{
	if (s[i] == 'l')
	{
		return 0;
	}
	else
	{
		i++;
		int l = bint();
		i++;
		int r = bint();
		return max(l, r) + 1;
	}
}

int main172()
{
	int t;
	cin >> t;
	while (t--)
	{
		i = 0;
		cin >> s;
		cout << bint() << endl;
	}
	return 0;
}*/