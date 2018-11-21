/*#include<iostream>

using namespace std;

int AMZ(int a)
{
	if (a == 0)
		return 1;
	if (a == 1)
		return 2;
	return AMZ(a - 1) + AMZ(a - 2);
}

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		cin >> n;
		cout << AMZ(n) << endl;
	}
	return 0;
}*/