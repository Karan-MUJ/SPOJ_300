/*#include<iostream>
#include<string>

using namespace std;

int carr[26];
int carrn[26];

long long ca(int i, int n, int sum, int current)
{
	current += carrn[i];
	if (i == n - 1)
	{
		return 1;
	}
	if (carr[n - 1] - carr[i] < current)
	{
		return 1;
	}	
	if (current >= sum)
	{
		return ca(i + 1, n, current, 0) + ca(i + 1, n, sum, current);
	}
	if (current < sum)
	{
		return ca(i + 1, n, sum, current);
	}
}

int main208()
{
	int c = 1;
	string s;
	while (true) 
	{
		cin >> s;
		if (s == "bye")
			break;
		int n = s.length();		
		carr[0] = s[0] - '0';
		carrn[0] = s[0] - '0';
		for (int i = 1; i < n; i++)
		{
			carr[i] = s[i] - '0' + carr[i - 1];
			carrn[i] = s[i] - '0';
		}
		cout << c << ". " << ca(0, n, 0, 0) << endl;
		c++;
	}
	return 0;
}*/