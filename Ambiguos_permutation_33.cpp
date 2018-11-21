/*#include<iostream>

using namespace std;

int main()
{
	while(1)
	{
		int n = 0, x, c = 0;
		cin >> n;
		if (n == 0)
			break;
		int *a = new int[n+1];
		for (int i = 1; i <= n; i++)
		{
			cin >> x;
			a[i] = x;
		}		
		for (int i = 1; i <= n; i++)
		{
			if (a[a[i]] != i)
			{
				//cout << "not ambiguous" << endl;				
				c = 1;
				break;
			}
		}
		if (c != 1)
		{
			cout << "ambiguous" << endl;
		}
		if (c == 1)
		{
			cout << "not ambiguous" << endl;
		}
		delete a;
	}	
	return 0;
}
*/