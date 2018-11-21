#include<iostream>
#include<set>
#include<iterator>
#include<string>
#include<vector>

using namespace std;

int main81()
{
	int t, n;
	cin >> t;
	string s;
	multiset <string> bank;
	vector <string> arr;
	multiset <string> ::iterator itr1;
	while (t--)
	{
		arr.clear();
		bank.clear();
		cin >> n;
		cin.ignore();
		for (int i = 0; i < n; i++)
		{
			getline(cin, s);
			bank.insert(s);
		}
		for (itr1 = bank.begin(); itr1 != bank.end(); ++itr1)
		{
			arr.push_back(*itr1);
		}
		int count;
		for (int i = 0; i < n; i++)
		{
			count = 1;
			while (i < n - 1 && arr[i] == arr[i + 1])
			{
				count++;
				i++;
			}
			cout << arr[i] << ' ' << count << endl;
		}
	}
	return 0;
}