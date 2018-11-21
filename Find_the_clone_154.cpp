#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main154()
{
	string str[20001];
	while (1)
	{
		int n, l, count = 0;
		cin >> n >> l;		
		int *c = new int[n + 1];
		for (int i = 0; i < n + 1; i++)
		{
			c[i] = 0;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> str[i];
		}
		sort (str, str + n);
		for (int i = 0; i < n;)
		{
			int s = i;
			count = 0;
			while (str[i] == str[s])
			{
				count++;
				i++;
			}
			c[count]++;
		}
		for (int i = 1; i < n + 1; i++)
		{
			cout << c[i] << endl;
		}
		delete c;		
	}
}