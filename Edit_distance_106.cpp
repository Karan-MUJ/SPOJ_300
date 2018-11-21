#include<iostream>
#include<string>
using namespace std;

string str1;
string str2;

int min(int a, int b, int c)
{
	if (a < b)
	{
		if (a < c)
			return a;
		else
			return c;
	}
	else
	{
		if (b < c)
			return b;
		else
			return c;
	}
}

int editDist(string &str1, string &str2, int m, int n)
{
	if (m == 0)
		return n;
	if (n == 0)
		return m;
	if (str1[m-1] == str2[n-1])
	{
		return editDist(str1, str2, m - 1, n - 1);
	}
	return 1 + min(editDist(str1, str2, m - 1, n), editDist(str1, str2, m, n - 1), editDist(str1, str2, m - 1, n - 1));
}

int main106()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
	cin >> str1;
	cin >> str2;

	cout << editDist(str1, str2, str1.length(), str2.length()) << endl;
	//int n;
	//cin >> n;
	}
	return 0;
}

