/*#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int t;
	unsigned long long n, arr[51];
	arr[0] = 1;
	for (int i = 1; i < 51; i++)
	{
		arr[i] = pow(2, i);
	}
	for (int i = 1; i < 51; i++)
	{
		arr[i] += arr[i - 1];
	}
	vector <bool> sol;
	cin >> t;
	while (t--)
	{		
		cin >> n;
		if (n == 1)
		{
			cout << '5' << endl;
			continue;
		}
		if (n == 2)
		{
			cout << '6' << endl;
			continue;
		}
		int index = 0, solution = 0, tmp = 0;
		for (int i = 0; i < 51; i++)
		{
			if (arr[i] <= n)
				index = i;
			else 
				break;
		}
		n -= arr[index];
		index++;		
		while (index > 0)
		{
			if(n % 2)
			{
				sol.push_back(1);				
			}
			else
			{
				sol.push_back(0);
			}
			n >>= 1;
			index--;
		}
		for (int i = sol.size() - 1; i >= 0; i--)
		{
			if (sol[i] == 0)
				cout << '5';
			else
				cout << '6';
		}
		cout << endl;
		sol.clear();
	}
	return 0;
}*/