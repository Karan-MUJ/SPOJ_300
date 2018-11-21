#include<iostream>
#include<algorithm>

using namespace std;

int main13()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		int r = 0;
		cin >> n;
		int* a = new int[n];
		int* b = new int[n];		
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + n);		
		for (int i = 0; i < n; i++)
		{
			r += a[i] * b[i];
		}
		//for (int i = 0; i < n; i++)
			//cout << a[i] << " ";
		cout << r << endl;
		delete a;
		delete b;
	}
	cin >> t;
	return 0;
}