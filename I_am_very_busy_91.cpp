#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

bool sortbysec(const pair<int, int> &a,
	const pair<int, int> &b)
{
	return (a.second < b.second);
}

int main91()
{		
	int t = 0;
	std::ios::sync_with_stdio(false);
	cin >> t;
	while(t--)
	{		
		int n = 0; 
		cin >> n;
		vector < pair < int, int > > arr;
		int *arr1 = new int[n];
		int *arr2 = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr1[i] >> arr2[i];
		}				
		for (int i = 0; i<n; i++)
			arr.push_back(make_pair(arr1[i], arr2[i]));
		sort(arr.begin(), arr.end(), sortbysec);
		int stop = arr[0].second;
		int count = 1;
		for(int i = 0; i < n; i++)
		{
			if (arr[i].second > stop && arr[i].first >= stop)
			{
				count++;
				stop = arr[i].second;
			}
		}
		cout << count << endl;
		delete arr1;
		delete arr2;
	}
	return 0;
}