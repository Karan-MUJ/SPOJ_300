/*#include<iostream>
#include<algorithm>
#define sz 50009

using namespace std;

int que[sz] = { 0 };
struct SegmentTree { int prefixSum, suffixSum, Sum, maxSum; };
SegmentTree tree[sz << 3];

SegmentTree merge(SegmentTree a, SegmentTree b)
{
	SegmentTree res;
	res.Sum = a.Sum + b.Sum;
	res.maxSum = max(max(a.maxSum, b.maxSum), (a.suffixSum + b.prefixSum));
	res.prefixSum = max(a.prefixSum, a.Sum + b.prefixSum);
	res.suffixSum = max(b.suffixSum, b.Sum + a.suffixSum);
	return res;

}

void build(int node, int start, int end)
{
	if (start == end)
	{
		int x;
		cin >> x;
		tree[node].prefixSum = tree[node].suffixSum = tree[node].Sum = tree[node].maxSum = x;
		return;
	}
	int l = node * 2;
	int r = node * 2 + 1;
	int mid = (start + end) / 2;
	build(l, start, mid);
	build(r, mid + 1, end);
	tree[node] = merge(tree[l], tree[r]);
}

SegmentTree query1(int node, int start, int end, int x, int y)
{
	if (start == x && end == y)
		return tree[node];
	int l = node*2;
	int r = node*2 + 1;
	int mid = (start + end) / 2;
	if (y <= mid)
		return query1(l, start, mid, x, y);
	else if (x > mid)
		return query1(r, mid + 1, end, x, y);
	else
		return merge(query1(l, start, mid, x, mid), query1(r, mid + 1, end, mid + 1, y));
}

int main226()
{
	int n, k, a, b;
	cin >> n;	
	build(1, 1, n);
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> a >> b;
		cout << query1(1, 1, n, a, b).maxSum << endl;
	}
	return 0;
}*/