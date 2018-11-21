/*#include<iostream>
#include<vector>
#include<stack>
#include<cstring>
#include<iterator>

using namespace std;

vector <int> bugs[2010];
bool vbugs[2010];
int bugstat[2010];

bool bugdfs(int i)
{
	vector <int> ::iterator it;
	vbugs[i] = true;
	int stat = 1, temp;
	bugstat[i] = 1;
	stat++;
	stack <int> st;
	for (it = bugs[i].begin(); it != bugs[i].end(); it++)
	{
		st.push(*it);
		if (bugstat[i] == bugstat[*it])
			return true;
		bugstat[*it] = (bugstat[i] + 1) % 2;
	}
	stat++;
	while (!st.empty())
	{
		temp = st.top();
		st.pop();
		vbugs[temp] = true;
		for (it = bugs[temp].begin(); it != bugs[temp].end(); it++)
		{
			if (bugstat[*it] == bugstat[temp])
				return true;
			if (vbugs[*it] == false)
			{
				st.push(*it);
				bugstat[*it] = (bugstat[temp] + 1) % 2;
			}
		}
	}
	return false;
}

int main()
{
	int t, n, k, a, b, c = 0;
	cin >> t;
	while (t--)
	{
		memset(bugstat, -1, sizeof(bugstat));
		memset(vbugs, false, sizeof(vbugs));
		cin >> n >> k;
		for (int i = 0; i < k; i++)
		{
			cin >> a >> b;
			bugs[a].push_back(b);
			bugs[b].push_back(a);
		}
		bool flag = false;
		for (int i = 1; i < n; i++)
		{
			if (vbugs[i] == false)
			{
				flag = bugdfs(i);
				if (flag)
				{
					break;
				}
			}
		}
		cout << "Scenario #" << ++c << ':' << endl;
		if (flag)
		{
			cout << "Suspicious bugs found!" << endl;
		}
		else
		{
			cout << "No suspicious bugs found!" << endl;
		}
		for (int i = 0; i < 2010; i++)
		{
			bugs[i].clear();
		}
	}
	return 0;
}*/