#include<iostream>

using namespace std;

int main11() 
{
	int n;
	cin >> n;
	for (int i = 0; i < n ; i++)
	{
		int x, y, r;
		cin >> x >> y;
		r = (x == y) ? (x % 2 == 0) ? ( x * 2 ):((x * 2) - 1) : ((x - y) == 2) ? ((x % 2) == 0) ? ((x * 2) - 2) : ((x * 2) - 3) : (-1);
		if (r == -1)
		{
			cout << "No Number" << endl;
			continue;
		}
		cout << r << endl;
	}
	return 0; 
}