#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define mx 10010

using namespace std;

bool pp[10010] = { 0 };
vector <int> ppp;

void prp()
{
	pp[0] = 1;
	pp[1] = 1;
	for (int i = 2; i*i < mx; i++)
	{
		if(pp[i] == false)
		{
			for (int j = 2; i * j < mx; j++)
			{
				pp[i * j] = true;
			}
		}
	}
	for (int i = 0; i < mx; i++)
	{
		if (pp[i] == false && i > 1000)
			ppp.push_back(i);
	}
}

bool connect(int i, int j)
{
	int a, b, c = 0, n = 4;
	while (n-- != 0)
	{
		a = i % 10;
		i /= 10;		
		b = j % 10;
		j /= 10;
		if (a != b)
		{
			c++;
		}
	}
	if (c > 1)
		return false;
	return true;
}

int main238()
{
	int t, a, b, start, end;
	cin >> t;
	prp();
	vector <int> prpth[10000];
	for (int i = 0/*start*/; ppp[i] < 10000; i++)
	{
		for (int j = i + 1; ppp[j] < 10000/*end*/; j++)
		{
			if (connect(ppp[i], ppp[j]))
			{
				prpth[ppp[i]].push_back(ppp[j]);
				prpth[ppp[j]].push_back(ppp[i]);
			}
		}
	}
	while (t--)
	{		
		cin >> a >> b;
		if (a == b)
		{
			cout << 0 << endl;
			continue;
		}
		//start = lower_bound(ppp.begin(), ppp.end(), a) - ppp.begin();
		//end = lower_bound(ppp.begin(), ppp.end(), b) - ppp.begin();		
		bool flag = false;
		bool visited[10000] = { false };
		queue <int> yo;
		int arr[10000] = { 0 };
		visited[a] = true;
		for (int i = 0; i < prpth[a].size(); i++)
		{
			yo.push(prpth[a][i]);
			arr[prpth[a][i]] = arr[a] + 1;
			if (prpth[a][i] == b)
			{
				flag = true;
				break;
			}
		}
		int temp;
		while (yo.empty() != true && flag == false)
		{
			temp = yo.front();
			yo.pop();
			visited[temp] = true;
			for (int i = 0; i < prpth[temp].size(); i++)
			{
				if (!visited[prpth[temp][i]]) 
				{
					yo.push(prpth[temp][i]);
					arr[prpth[temp][i]] = arr[temp] + 1;
					if (prpth[temp][i] == b)
					{
						flag = true;
						break;
					}
				}
			}
			if (flag == true)
				break;
		}
		if (flag == false)
		{
			cout << "Impossible" << endl;
		}
		else
		{
			cout << arr[b] << endl;
		}
	}
	return 0;
}