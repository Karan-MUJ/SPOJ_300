#include<iostream>
#include<string>

using namespace std;

long long alpha(int i, int n, string s)
{
	if (i == n)
	{
		return 1;
	}
	else if ((s[i] == '1' && i < n - 1) || (i < n - 1 && s[i] == '2') && s[i + 1] <= '6')
	{
		return alpha(i + 2, n, s) + alpha(i + 1, n, s);		
	}
	else
	{		
		return alpha(i + 1, n, s);	
	}
}

int main138()
{ 
	while (1) 
	{
		string s;
		getline(cin, s);
		if (s.size() == 1 && s[0] == '0')
			break;
		else
			cout << alpha(0, s.size(), s) << endl;
	}
	return 0;
}