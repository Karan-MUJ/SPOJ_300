/*#include<iostream>
#include<vector>
#include<stack>
#include<cstring>

using namespace std;

vector <int> lt[10009];
int tc;
int tr[10009];
bool vtree[10009];

void longtree(int i)
{
	vector <int> ::iterator it;
	int temp;
	stack <int> st;
	tr[1] = 0;
	for (it = lt[i].begin(); it != lt[i].end(); it++)
	{
		st.push(*it);
		tr[*it] = tr[i] + 1;
	}	
	while (!st.empty())
	{
		temp = st.top();
		st.pop();
		vtree[temp] = true;
		for (it = lt[temp].begin(); it != lt[temp].end(); it++)
		{			
			if (vtree[*it] == false)
			{
				st.push(*it);
				tr[*it] = tr[temp] + 1;
			}
		}
	}
}

int main215()
{
	int n, a, b, m1 = 0, m2 = 0;
	cin >> n;
	memset(vtree, false, sizeof(vtree));
	memset(tr, 0, sizeof(tr));
	for (int i = 0; i < n - 1; i++)
	{
		cin >> a >> b;
		lt[a].push_back(b);
		lt[b].push_back(a);
	}
	tc = 0;
	vtree[1] = true;
	longtree(1);
	for (int i = 0; i < 10009; i++)
	{
		if (tr[i] >= m2)
		{
			m2 = tr[i];
			m1 = i;
		}
	}
	memset(vtree, false, sizeof(vtree));
	memset(tr, 0, sizeof(tr));
	longtree(m1);
	m1 = 0;
	for (int i = 0; i < 10009; i++)
	{
		if (tr[i] >= m1)
		{
			m1 = tr[i];
		}
	}
	cout << m1 << endl;
	return 0;
}*/