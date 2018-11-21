#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main164()
{
	vector <int> queue;
	vector <int> sorted;
	int t = 0;
	cin >> t;
	while (t--)
	{
		vector <int> ::iterator it;
		int m, n, x, element, result = 0;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			queue.push_back(x);
			//arr[x]++;
		}
		it = queue.begin();
		sorted.assign(it, queue.end());
		sort(sorted.begin(), sorted.end());
		element = queue[m];
		queue[m] = -1;
		while (true)
		{
			if (queue[0] == -1 && sorted[sorted.size() - 1] == element)
			{
				result++;
				break;
			}
			if (queue[0] != sorted[sorted.size() - 1])
			{
				x = queue[0];
				queue.erase(queue.begin());
				queue.push_back(x);
				//result++;
			}
			else
			{
				int j = queue[0];
				//arr[j]--;
				queue.erase(queue.begin());
				//if (arr[j] == 0)
				sorted.pop_back();
				result++;
			}
		}
		cout << result << endl;
		queue.clear();
		sorted.clear();
	}
	return 0;
}