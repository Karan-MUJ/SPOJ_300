/*#include<iostream>
#include<algorithm>

using namespace std;

typedef long long ll;
const ll INF = 1000000005;
const ll INFLL = 1000000000000000005ll;
const ll MOD = 1000000007;
const int RIGHT = 131072;
const int SIZE = 265000;
int A[SIZE], L[SIZE], R[SIZE], M[SIZE];
int N, Q;

void build(int n, int a, int b)
{
	if (a == b)
	{
		L[n] = R[n] = M[n] = 1;
		return;
	}
	int mid = (a + b) / 2;
	build(2 * n, a, mid);
	build(2 * n + 1, mid + 1, b);
	int sz = (b - a + 1) / 2;
	L[n] = (L[2 * n] == sz && A[mid] == A[mid + 1]) ? (L[2 * n] + L[2 * n + 1]) : (L[2 * n]);
	R[n] = (R[2 * n + 1] == sz && A[mid] == A[mid + 1]) ? (R[2 * n] + R[2 * n + 1]) : (R[2 * n + 1]);
	M[n] = max(max(max(M[2 * n], M[2 * n + 1]), L[n]), R[n]);
	if (A[mid] == A[mid + 1])
		M[n] = max(M[n], R[2 * n] + L[2 * n + 1]);
}

int query(int l, int r, int n, int a, int b)
{
	if (a > r || b < l)
		return 0;
	if (a >= l && b <= r)
		return M[n];
	int mid = (a + b) / 2;
	if (r <= mid)
		return query(l, r, 2 * n, a, mid);
	if (l > mid)
		return query(l, r, 2 * n + 1, mid + 1, b);
	int ql = query(l, r, 2 * n, a, mid);
	int qr = query(l, r, 2 * n + 1, mid + 1, b);	
	int at_left = min(mid - l + 1, R[2 * n]);
	int at_right = min(r - mid, L[2 * n + 1]);
	int middle = (A[mid] == A[mid + 1]) ? (at_left + at_right) : (0);
	return max(max(ql, qr), middle);
}

int main()
{
	ios::sync_with_stdio(0);
	while (true)
	{
		cin >> N;
		if (!N)
			return 0;
		cin >> Q;
		for (int i = 1; i <= N; i++)
			cin >> A[i];
		build(1, 1, RIGHT);
		while (Q--)
		{
			int l, r;
			cin >> l >> r;
			cout << query(l, r, 1, 1, RIGHT) << endl;
		}
	}
}*/