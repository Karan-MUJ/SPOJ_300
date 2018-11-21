#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main148()
{
	string str;
	while (cin >> str)
	{		
		int count = 0, count1 = 0;
		for (int i = 0; 2 * i < str.size(); i++)
		{
			//Even Caps
			if (str[2 * i] <= 'z' && str[2 * i] >= 'a')
			{
				count++;
			}
			if (((2 * i) + 1) < str.size() && str[(2 * i) + 1] >= 'A' && str[(2 * i) + 1] <= 'Z')
			{
				count++;
			}
			//Odd caps
			if (str[2 * i] <= 'Z' && str[2 * i] >= 'A')
			{
				count1++;
			}
			if (((2 * i) + 1) < str.size() && str[(2 * i) + 1] >= 'a' && str[(2 * i) + 1] <= 'z')
			{
				count1++;
			}
		}
		cout << min(count, count1) << endl;
	}
	return 0;
}