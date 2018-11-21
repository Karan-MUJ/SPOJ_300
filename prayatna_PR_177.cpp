#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main177()
{
	int t, n, k, a, b, count;
	cin >> t;
	while (t--)
	{
		count = 0;
		cin >> n >> k;
		vector <int> arr[100009];
		for(int i = 0; i < 100009; i++)
		{
			arr[i].clear();
		}
		for (int i = 0; i < k; i++)
		{
			cin >> a >> b;
			arr[b].push_back(a);
			arr[a].push_back(b);
		}
		vector <int> ::iterator j;
		vector <int> ::iterator l;
		bool visited[100009];
		for (int i = 0; i < 100009; i++)
			visited[i] = false;
		stack <int> tovisit;
		int current;
		for (int i = 0; i < n; i++)
		{
			if(visited[i] == false)
			{
				visited[i] = true;
				count++;
				for (j = arr[i].begin(); j != arr[i].end(); j++)
				{
					if(visited[arr[i][*j]] == false)
					{
						tovisit.push(arr[i][*j]);
					}
				}
				while (tovisit.empty() != true)
				{
					current = tovisit.top();
					tovisit.pop();
					visited[current] = true;
					for(l = arr[current].begin(); l != arr[current].end(); l++)
					{
						if(visited[arr[current][*l]] == false)
						{
							tovisit.push(arr[current][*l]);
						}
					}
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}