#include <iostream>

using namespace std;

int main36()
{
	long long n;
	cin >> n;
	while (n > 1)	
	{
		if ( n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			cout << "NIE";
			break;
		}		
	}
	cout << "TAK";
	//int x;
	//cin >> x;
	//cout << n << endl;
	return 0;
}