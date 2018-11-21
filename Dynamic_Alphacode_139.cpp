#include<iostream>
#include<string>

using namespace std;

int main139()
{
	while(1)
	{
		string s;
		getline(cin, s);
		if (s.size() == 1 && s[0] == '0')
			break;
		int *arr = new int[s.size() + 1];
		arr[0] = 1;
		arr[1] = 1;
		for(int i = 2; i < s.size() + 1; i++)
		{
			if (s[i - 1] == '0')
			{
				arr[i] = arr[i - 2];
			}
			else if ((s[i - 2] == '1') || (s[i - 2] == '2' && (s[i - 1] <= '6')))
			{
				arr[i] = arr[i - 1] + arr[i - 2];
			}
			else
			{
				arr[i] = arr[i - 1];
			}
		}
		cout << arr[s.size()] << endl;
		delete arr;
	}
	return 0;
}