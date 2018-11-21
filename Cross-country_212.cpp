#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main212()
{
	int t, tmp;
	cin >> t;	
	while (t--)
	{
		int max = 0;
		vector <int> a, tom;
		cin >> tmp;
		while (tmp != 0)
		{
			a.push_back(tmp);
			cin >> tmp;
		}
		cin >> tmp;
		while (true)
		{
			while (tmp != 0)
			{
				tom.push_back(tmp);
				cin >> tmp;
			}
			cin >> tmp;
		}
		int arr[2010][2010];
		for (int i = 0; i < 2010; i++)
		{
			for (int j = 0; j < 2010; j++)
			{
				arr[i][j] = 0;
			}
		}
		for (int i = 1; i <= a.size(); i++)
		{
			for (int j = 1; j <= tom.size(); j++)
			{
				if (a[i - 1] == tom[j - 1])
					arr[i][j] += arr[i - 1][j - 1] + 1;
				else
					arr[i][j] = (arr[i - 1][j] > arr[i][j - 1]) ? arr[i - 1][j] : arr[i][j - 1];
			}
		}
		cout << arr[a.size()][tom.size()] << endl;
	}
	return 0;
}