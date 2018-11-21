#include<iostream>
#include<string>

using namespace std;

int main104()
{
	while (1) 
	{
		string s;
		cin >> s;
		int a = (s[0] - '0') * 10 + s[1] - '0', b = s[3] - '0', buf = 1;
		if (a == 0)
			break;
		for (int i = 0; i < b; i++)
		{
			a *= 10;
		}
		while (buf < a)
		{
			buf *= 2;
		}
		buf /= 2;
		cout << (a - buf) * 2 + 1 << endl;
	}
	return 0;
}