/*#include<iostream>
#include<string>

using namespace std;

bool st = 0;

bool isblot(string s)
{
	st = 0;
	int size = s.length();
	for (int i = 0; i < size; i++)
	{
		if (s[i] > '9' || s[i] < '0')
		{
			st = true;
			break;
		}
	}
	return st;
}

int parse(string s)
{
	int a = 0, b = 0;
	for (int i = 0; i < s.length(); i++)
	{
		a *= 10;
		a += (s[i] - '0');				
	}
	return a;
}

int main()
{
	int t = 0;
	char plus = '+', equal = '=', temp;
	cin >> t;
	while (t--)
	{
		string lhs1, lhs2, rhs;
		int a = 0, b = 0, result = 0, c = 0;		
		cin >> lhs1;
		cin >> temp;
		cin >> lhs2;
		cin >> temp;
		cin >> rhs;
		if (isblot(lhs1))
		{
			b = parse(lhs2);
			c = parse(rhs);
			result = c - b;
			cout << result << " + " << lhs2 << " = " << rhs << endl;
			continue;
		}
		if (isblot(lhs2))
		{
			a = parse(lhs1);
			c = parse(rhs);
			result = c - a;
			cout << lhs1 << " + " << result << " = " << rhs << endl;
			continue;
		}
		if (isblot(rhs))
		{
			a = parse(lhs1);
			b = parse(lhs2);
			result = a + b;
			cout << lhs1 << " + " << lhs2 << " = " << result << endl;
			continue;
		}
	}
	return 0;
}*/