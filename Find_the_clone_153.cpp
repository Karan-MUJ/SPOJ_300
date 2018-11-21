#include<iostream>
#include<map>
#include<string>
#include<iterator>

using namespace std;

int main153()
{
	while (1) 
	{
		int n, l;
		string s;
		std::ios::sync_with_stdio(false);
		cin >> n >> l;
		if (l == 0 && n == 0)
		{
			return 0;
		}
		map <string, int> dna;
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			if (dna.find(s) != dna.end())
			{
				dna.find(s)->second++;
			}
			else
			{
				dna.insert(pair<string, int>(s, 1));
			}
		}
		int *arr = new int[n + 1];
		for (int i = 0; i < n + 1; i++)
		{
			arr[i] = 0;
		}
		map <string, int> ::iterator itr;
		for (itr = dna.begin(); itr != dna.end(); itr++)
		{
			arr[itr->second]++;
		}
		for (int i = 1; i <= n; i++)
		{
			cout << arr[i] << endl;
		}
		delete arr;
	}
}