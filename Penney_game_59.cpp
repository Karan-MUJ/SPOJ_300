#include<iostream>
#include<string>

using namespace std;

int main59()
{
	int p = 0;
	cin >> p;
	for (int i = 1; i <= p; i++)
	{
		int n = 0;
		cin >> n;
		string s;
		cin >> s;
		int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
		string a1[] = { "TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH" };
		int arr[] = {0,0,0,0,0,0,0,0};
		for (int j = 0; j <= s.length() - 3; j++)
		{
			string temp = s.substr(j, 3);
			for (int k = 0; k < 8; k++)
			{
				if (a1[k].compare(temp) == 0)
				{
					++arr[k];
					break;
				}
			}
		}
		cout << i << " ";
		for (int k = 0; k < 8; k++)
		{
			cout << arr[k] << " ";
		}
		cout << endl;
	}
	return 0;
}