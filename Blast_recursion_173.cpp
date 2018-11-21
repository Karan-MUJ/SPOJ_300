/*#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

long long blastmemoi[2009][2009];

long long blast(string a, string b, int v, int a1, int b1)
{
	if (a1 < 0 && b1 < 0)
	{
		return 0;
	}
	else if (a1 < 0 && b1 >= 0)
	{
		return (++b1)*v;
	}
	else if (b1 < 0 && a1 >= 0)
	{
		return (++a1)*v;
	}
	else if (blastmemoi[a1][b1] != -1)
	{
		return blastmemoi[a1][b1];
	}
	else
	{
		//a _		
			long long _a = blast(a, b, v, a1, b1 - 1) + v;		
		//b _				
			long long _b = blast(a, b, v, a1 - 1, b1) + v;		
		//no _
			long long _no = blast(a, b, v, a1 - 1, b1 - 1) + abs(a[a1] - b[b1]);			
			long long sol = min(_a, min(_b, _no));
			blastmemoi[a1][b1] = sol;
			return sol;
	}
}

int main173()
{
	std::ios::sync_with_stdio(false);
	string a, b;
	int v;
	cin >> a >> b >> v;
	for (int i = 0; i <= a.length(); i++)
	{
		for (int j = 0; j <= b.length(); j++)
		{
			blastmemoi[i][j] = -1;
		}
	}
	cout << blast(a, b, v, a.size() - 1, b.size() - 1) << endl;
	return 0;
}*/