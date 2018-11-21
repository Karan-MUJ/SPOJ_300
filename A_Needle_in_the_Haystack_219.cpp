/*#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int n, ssz, psz;
	string s, p;
	cin >> n;
	getline(cin, s);
	getline(cin, p);
	int *arr = new int[p.size()];
	ssz = s.size();
	psz = p.size();
	int j = 0, i = 1;
	// lps array
	while (i != psz)
	{
		if (p[i] == p[j])
		{
			arr[i] = j + 1;
			i++;
			j++;
		}
		else
		{
			if (j != 0)
			{
				j = arr[j - 1];
			}
			else
				j = 0;
		}
	}
	// Let the matching begin
	i = 0, j = 0;
	int k = 0;
	bool flag = false;
	while (i < ssz && j < psz)
	{
		if (s[i] == p[j])
		{
			i++;
			j++;
		}
		else
		{
			if (j != 0)
			{
				j = arr[j - 1];
			}
			else
				i++;
		}
		if (j = psz)
		{
			flag = true;
			break;
		}
	}
	return 0;
}*/