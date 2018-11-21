#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main146()
{
	int t = 0;
	cin >> t;
	//ws(cin);
	while (t--)
	{
		string s;
		cin.ignore();
		getline(cin, s);
		long long sol = 1;		
		int index = 0, count = 0;
		for (index; index < s.size();)
		{
			count = 0;
			char current = s[index];
			while (index < s.size() && s[index] == current)
			{
				index++;
				count++;
			}
			sol *= pow(2, count - 1);
		}
		cout << sol << endl;
	}
	return 0;
}