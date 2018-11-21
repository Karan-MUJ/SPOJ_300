#include<iostream>
#include<math.h>

using namespace std;

int main143()
{
	int n = 0, c = 0;
	cin >> n;
	while(n != 0)
	{
		++c;
		cout << "Case " << c << ", N = " << n << ", # of different labelings = ";
		n = pow(n, n - 2);
		if (n == 1)
			cout << "1" << endl;
		else
			cout << n << endl;
		cin >> n;
	}
	return 0;
}