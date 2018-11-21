/*#include<iostream>
#include<string>

using namespace std;

long long arr[5010];

long long alpha1(int i, int n, string s)
{
	if (i == n)
	{
		return 1;
		arr[i] = 1;
	}
	else if ((s[i] == '1' && i < n - 1) || (i < n - 1 && s[i] == '2') && s[i + 1] <= '6')
	{
		if (arr[i + 2] != -1 && arr[i + 1] != -1)
		{
			return arr[i + 2] + arr[i + 1];
		}
		else if (arr[i + 2] != -1)
		{			
			arr[i + 1] = alpha1(i + 1, n, s);
			return arr[i + 2] + arr[i + 1];
		}
		else if (arr[i + 1] != -1)
		{
			arr[i + 2] = alpha1(i + 2, n, s);
			return arr[i + 2] + arr[i + 1];
		}
		else 
		{
			arr[i + 2] = alpha1(i + 2, n, s);
			arr[i + 1] = alpha1(i + 1, n, s);
			return arr[i + 2] + arr[i + 1];
		}
	}
	else
	{
		if (arr[i + 1] != -1)
			return arr[i + 1];
		else
		{
			arr[i + 1] = alpha1(i + 1, n, s);
			return arr[i + 1];
		}
	}
}

int main140()
{
	while (1) 
	{
		memset(arr, -1, 5010);
		for (int i = 0; i < 5010; i++)
		{
			arr[i] = -1;
		}
		string s;
		getline(cin, s);
		if (s.size() == 1 && s[0] == '0')
			break;
		else
			cout << alpha1(0, s.size(), s) << endl;
	}
	return 0;
}*/