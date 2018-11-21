/*#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main179()
{
	std::ios::sync_with_stdio(false);
	string a, b;
	while (cin >> a >> b) 
	{
		int arra[26], arrb[26], sol[26];
		for (int i = 0; i < 26; i++)
		{
			arra[i] = 0;
			arrb[i] = 0;
			sol[i] = 0;
		}		
		for (int i = 0; i < a.length(); i++)
		{
			arra[a[i] - 'a']++;
		}
		for (int i = 0; i < b.length(); i++)
		{
			arrb[b[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (arra[i] != 0 && arrb[i] != 0)
				sol[i] = min(arra[i], arrb[i]);
		}
		for (int i = 0; i < 26; i++)
		{
			for(int j = 0; j < sol[i]; j++)
			{
				cout << (char)(i + 'a');
			}
		}
		cout << endl;
	}
	return 0;
}*/