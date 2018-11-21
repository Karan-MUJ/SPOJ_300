#include<iostream>
#include<string>

bool error = 0;
bool java = 0;
bool cpp = 0;

using namespace std;

void type(string s)
{ 
	int n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '_')
		{			
			if (java)
			{
				error = 1;
				cout << "Error!" << endl;
				break;
			}
			if (i == 0 || i == n-1)
			{
				error = 1;
				cout << "Error!" << endl;
				break;
			}
			if (s[i+1] == '_')
			{
				error = 1;
				cout << "Error!" << endl;
				break;
			}
			cpp = true;
		}
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if (i == 0)
			{
				error = 1;
				cout << "Error!" << endl;
				break;
			}
			if (cpp)
			{
				error = 1;
				cout << "Error!" << endl;
				break;
			}
			else
				java = true;
		}
	}
}

void javam(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			cout << "_" << (char)(s[i] + 32);
			continue;
		}
		cout << s[i];
	}
	cout << endl;
}

void cppm(string s)
{
	cout << s[0];
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i - 1] == '_')
		{
			if (s[i] == '_')
				continue;
			else
				cout << (char)(s[i] - 32);
		}
		else if (s[i] == '_')
		{
			continue;
		}
		else
		{
			cout << s[i];
		}
	}
	cout << endl;
}

int main88()
{
	string s;
	while (cin >> s)
	{
		error = 0;
		java = 0;
		cpp = 0;
		type(s);
		if (error)
			continue;
		if (java)
		{
			javam(s);
			continue;
		}
		if (cpp)
		{
			cppm(s);
			continue;
		}
		if (java == 0 && cpp == 0 && error == 0)
		{
			javam(s);
			continue;
		}
	}
	return 0;
}