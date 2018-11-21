/*#include<iostream>
#include<queue>

using namespace std;

bool isitatree(vector<int> graph[], int start, int n)
{
	int node, count = 0;
	queue <int> q;
	q.push(start);
	bool visited[n + 1];
	for (int i = 0; i < n+1; i++)
	{
		visited[i] = false;
	}
	while(!q.empty())
	{
		node = q.front();
		q.pop();
		visited[node] = true;
		for (int i = 0; i < sizeof(graph[node]); i++)
		{
			if (!visited[node])
				q.push(graph[node][i]);
			else
				return 0;
		}
		count++;
	}
	if (count != n)
		return false;
	else
		return true;
}

int main141()
{
	long long n, e, u, v;
	vector <int> graph[n + 1];
	for(int i = 0; i < e; i++)
	{
		cin >> u >> v;
		graph[u].push_back(v);
	}
	if(isitatree(graph, 1, n))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}*/