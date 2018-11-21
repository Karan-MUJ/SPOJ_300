/*#include<iostream>
#include<algorithm>
#define blck 174

using namespace std;

struct Query 
{
	int i, j, ind;
};

Query Q[30276];
int dq[30276], Qa[30276], Qcnt[100000], Qans;

void add(int c)
{
	Qcnt[dq[c]]++;
	if (Qcnt[dq[c]] == 1)
	{
		Qans++;
	}
}

void remove(int c)
{
	Qcnt[dq[c]]--;
	if (Qcnt[dq[c]] == 0)
	{
		Qans--;
	}
}

bool cmp(Query f, Query s)
{
	if (f.i / blck != s.i / blck)
		return f.i / blck < s.i / blck;
	else 
	{
		return f.j < s.j;
	}

}

int main249()
{
	ios::sync_with_stdio(false);
	int n, q, z;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> dq[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> Q[i].i >> Q[i].j;
		Q[i].i--;
		Q[i].j--;
		Q[i].ind = i;
	}
	sort(Q, Q + q, cmp);
	int cl = 0, cr = 0;
	for (int i = 0; i < q; i++)
	{
		int left = Q[i].i, right = Q[i].j;
		while (cl > left)
		{
			add(--cl);
		}
		while (cl < left)
		{
			remove(cl);
			cl++;
		}
		while (cr <= right)
		{
			add(cr);
			cr++;
		}
		while (cr > right + 1)
		{
			remove(--cr);
		}
		Qa[Q[i].ind] = Qans;
	}
	for (int i = 0; i < q; i++)
	{
		cout << Qa[i] << endl;
	}
	return 0;
}*/