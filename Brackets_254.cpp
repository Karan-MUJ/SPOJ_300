/*#include <algorithm>
#include <iostream>

#define NMAX 32768
#define TMAX 65536

using namespace std;

char seq[NMAX];
struct Node 
{
	int sum, minsum; 
}
Tree[TMAX];

void init(int Node, int i, int j) 
{
	if (i == j) 
	{
		Tree[Node].sum = Tree[Node].minsum = (seq[i] == '(' ? 1 : -1);
		return;
	}
	int m = (i + j) / 2;
	init(2 * Node, i, m);
	init(2 * Node + 1, m + 1, j);
	Tree[Node].sum = Tree[2 * Node].sum + Tree[2 * Node + 1].sum;
	Tree[Node].minsum = min(Tree[2 * Node].minsum, Tree[2 * Node].sum + Tree[2 * Node + 1].minsum);
}

void update(int Node, int i, int j, int idx) 
{
	if (i == j) 
	{
		Tree[Node].sum = Tree[Node].minsum = -Tree[Node].sum;
		return;
	}
	int m = (i + j) / 2;
	if (idx <= m) update(2 * Node, i, m, idx);
	else update(2 * Node + 1, m + 1, j, idx);
	Tree[Node].sum = Tree[2 * Node].sum + Tree[2 * Node + 1].sum;
	Tree[Node].minsum = min(Tree[2 * Node].minsum, Tree[2 * Node].sum + Tree[2 * Node + 1].minsum);
}

int main() 
{
	int len, q, i, idx, test = 1;
	while (cin >> len) 
	{
		cin >> seq;
		init(1, 0, len - 1);
		cout << "Test " << test++ << ':' << ' ' << endl;
		cin >> q;
		for (i = 0; i < q; i++) 
		{
			cin >> idx;
			if (!idx) 
			{
				if (!Tree[1].sum && !Tree[1].minsum) 
					cout << "YES" << endl;
				else 
					cout << "NO" << endl;
			}
			else update(1, 0, len - 1, idx - 1);
		}
	}
	return 0;
}*/