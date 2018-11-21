#include<iostream>
#include<math.h>

using namespace std;

int main8()
{
	for(;;)
	{
		int a = 0, b = 0, c = 0, next = 0;
		cin >> a >> b >> c;
		if (a == 0 & b == 0 & c == 0)
		{
			break;
		}
		if ((b-a) == (c-b))
		{
			cout << "AP " << (c + (c - b)) << endl;
			continue;
		}
		if ((b/a) == (c/b))
		{
			cout << "GP " << (c*(b / a)) << endl;
			continue;
		}
	}
	return 0;
}