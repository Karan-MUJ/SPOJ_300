#include<iostream>
#include<string>

using namespace std;

long long gcdlol(long long a, long long b)
{
	if (b == 0) return a;
	return gcdlol(b, a%b);
}

long long lcmlol(long long a, long long b)
{
	return b * a / gcdlol(a, b);
}

int main150()
{
	string s;
	long long div[100];
	long long ndiv[100];
	while (true)
	{
		ios_base::sync_with_stdio(false);
		cin >> s;
		bool flag = 0;
		long long index = 0, index1 = 0, lcm = 1;
		if (s.size() == 1 && s[0] == '*')
			break;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'Y')
			{
				div[index] = i + 1;
				index++;
			}
			else
			{
				ndiv[index1] = i + 1;
				index1++;
			}
		}
		for (int i = 0; i < index; i++)
		{
			lcm = lcmlol(lcm, div[i]);
		}
		for (int i = 0; i < index1; i++)
		{
			if (lcm % ndiv[i] == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			cout << "-1" << endl;
			continue;
		}
		else
			cout << lcm << endl;
	}
	return 0;
}