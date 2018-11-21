#include<iostream>
#include<string>

using namespace std;

int main14()//14
{
	while (true) 
	{
		int c = 0, r = 0;
		cin >> c;
		if (c == 0)
			break;
		string s;
		cin >> s;
		char arr[100][20];
		int size = s.length();
		r = s.size()/c;
		int x = 0;
		for (int i = 0; i < size;)
		{
			for (int j = 0; j < c; j++)
			{
				arr[x][j] = s[i];
				i++;
			}
			if (i >= size)
			{
				break;
			}
			x++;
			for (int j = c-1; j >= 0; j--)
			{
				arr[x][j] = s[i];
				i++;
			}
			if (i >= size)
			{
				break;
			}
			x++;
		}
		for (int i = 0; i < c; i++)
		{
			for (int j = 0; j < r; j++)
			{
				cout << arr[j][i];
			}
		}
		cout << endl;
	}
	return 0;
}