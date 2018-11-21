/*#include<iostream>
#include<string>
#include<queue>
#include<cstring>

using namespace std;

int indeg[26], outdeg[26], color[26];
bool found[26], g[26][26];
string word;

bool isconnected()
{
	int i, j;
	for (i = 0; i < 26; i++)
	{
		color[i] = found[i] ? 0 : 2;
	}
	for (i = 0; color[i]; i++);
	color[i] = 1;
	queue <int> Q;
	Q.push(i);
	while (!Q.empty())
	{
		i = Q.front();
		Q.pop();
		for (j = 0; j < 26; j++)
		{
			if (g[i][j] == 1 && !color[j])
			{
				Q.push(j);
				color[j] = 1;
			}
		}
		color[i] = 2;
	}
	for (i = 0; i < 26; i++)
	{
		if (color[i] != 2)
			return false;
	}
	return true;
}

bool hasEularPath()
{
	if (!isconnected())
		return false;
	int i, cnt1, cnt2;
	for (i = cnt1 = cnt2 = 0; i < 26; i++)
	{
		if (indeg[i] - outdeg[i] == 1)
			cnt1++;
		else if (outdeg[i] - indeg[i] == 1)
			cnt2++;
		else if (indeg[i] != outdeg[i])
			return false;
	}
	if (cnt1 + cnt2 == 0 || (cnt1 == 1 && cnt2 == 1))
		return true;;
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	int t, n, len, u, v;
	string s;
	cin >> t;
	while (t--)
	{
		memset(indeg, 0, sizeof indeg);
		memset(outdeg, 0, sizeof outdeg);
		memset(g, 0, sizeof g);
		memset(found, 0, sizeof found);
		cin >> n;
		bool stat = false;
		for (int i = 0; i < n; i++)
		{
			cin >> word;
			len = word.size();
			indeg[u = word[0] - 'a']++;
			outdeg[v = word[len - 1] - 'a']++;
			g[u][v] = g[v][u] = found[u] = found[v] = 1;
		}
		if (!hasEularPath())
		{
			cout << "The door cannot be opened." << endl;
		}
		else 
		{
			cout << "Ordering is possible." << endl;
		}
	}
	return 0;
}*/