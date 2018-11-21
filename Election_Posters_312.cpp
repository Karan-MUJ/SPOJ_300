/*#include <iostream>				http://codeforces.com/blog/entry/18588
#include <set>
#include <map>
#include <vector>

#define si(i) scanf("%d",&i)
#define sll(i) scanf("%lld",&i)
#define ss scanf("\n%s",i)
#define ll long long
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,j,n) for(int i=j;i<n;i++)
#define FORR(i,j,n) for(int i=n-1;i>-1;i--)
#define test(t) int t;si(t);while(t--)
#define M 1000000007
#define PI 3.141592653589793
#define sort(a) sort(a.begin(),a.end())
#define rev(a) reverse(a.begin(),a.end())
using namespace std;

typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
typedef vector<pair<int, pair<int, int> > > viii;
typedef vector<pair<string, int> > vsi;
typedef set<int> si;
typedef map<int, int> mii;
typedef map<string, int> msi;
si s, s1;
mii m;
set<int> ::iterator it, jt;
void compress_and_insert(int n) {
	int c = 1;
	for (it = s1.begin(); it != s1.end(); it++) {
		s.insert(c);
		m[*it] = c++;
	}

}
int main() {
	int n;
	test(t) {
		si(n);
		vii v, c;
		v.clear();
		m.clear();
		s1.clear();
		int a, b;
		REP(i, n) {
			si(a);
			si(b);
			v.pb(mp(a, b));
			s1.insert(a);
			s1.insert(b);
		}
		rev(v);
		compress_and_insert(n);
		int ans = 0;
		s.insert(M);
		REP(i, n) {
			int a = m[v[i].fs];
			int b = m[v[i].sc];
			it = s.lower_bound(a);
			jt = s.upper_bound(b);
			if (it != jt) {
				s.erase(it, jt);
				ans++;
			}			
		}
		cout << ans << endl;
	}
	return 0;
}
#include<iostream>		https://vishalpanwar.wordpress.com/2016/02/27/spoj-posters-election-posters/
#include<set>
#include<map>

using namespace std;

class comp 
{
public:
	inline bool operator() (const pair<int, int> &l, const pair<int, int> &r) const 
	{
		return l.first < r.first && l.second < r.second;
	}
};

bool inside(pair<int, int> &p, int x) 
{
	return (x <= p.second && x >= p.first);
}

int main() 
{
	int t, n, val_lo, val_up;
	cin >> t;
	int x, y;
	while (t--) 
	{
		set<pair<int, int>, comp> s;
		map<pair<int, int>, int> mp;
		map<int, int> mpp;
		cin >> n;
		s.insert(make_pair(0, 0));
		mp[make_pair(0, 0)] = -1;
		s.insert(make_pair(INT_MAX, INT_MAX));
		mp[make_pair(INT_MAX, INT_MAX)] = -1;
		int val = 1;
		pair<int, int> low, up;
		set<pair<int, int>>::iterator it_low, it_up, itt_low, itt_up;
		for (int i = 0; i < n; i++) 
		{
			cin >> x >> y;
			//here we have changed the definition of operator '<' see the compare structure above
			//here low will give the lower bound of pair{x,x} i.e. we will get the pair where eihter or both x or y is greater than x
			//similarly up will give the upper bound of pair{y,y}
			low = *(it_low = s.lower_bound(make_pair(x, x)));
			up = *(it_up = s.lower_bound(make_pair(y, y)));
			val_lo = mp[low];
			val_up = mp[up];
			//erase all the pairs from low to up as they all have some part of {x,y}
			s.erase(it_low, ++it_up);
			//Dealing with lower_bound of pair(x,x)
			//if lower_bound contains x between its pair i.e. (2,9) -> (4,11) || (2,9) -> (4,7)-> This case will be continued in the lower_bound(y,y) too :P
			if (inside(low, x)) 
			{
				//if it is not the case when (4,4) -> (4,7)
				if (low.second > x) 
				{
					s.insert(make_pair(low.first, x - 1));
					mp[make_pair(low.first, x - 1)] = val_lo;
				}
			}
			//if lower bound does not contain x between it i.e. the case when s is (1,1) (2,2) (7,8) and (7,8) is lower_bound(x,x) for (3,6)
			else 
			{
				//not consedering the case when (4,8) is lower_bound(x,x) for (3,7)
				if (low.first > y)s.insert(low);
			}
			//Dealing with lower_bound of pair(y,y)
			//if lower_bound contains y between its pair i.e. (7,9) is lower_bound(y,y) for (4,8) || (2,9) for (4,7)
			if (inside(up, y)) 
			{
				//if not the case when (2,7) for (4,7)
				if (up.second > y) 
				{
					s.insert(make_pair(y + 1, up.second));
					mp[make_pair(y + 1, up.second)] = val_up;
				}
			}
			//case when s is (1,1) (2,2) (15,45) and (15,45) is lower_bound(y,y) for (4,8) 
			else
			{
				s.insert(up);
			}
			//insert the given pair(x,y) in the set with value val and increment val
			s.insert(make_pair(x, y));
			mp[make_pair(x, y)] = val++;
		}
		int ans = 0;
		mpp[-1] = 1;
		for (set<pair<int, int>>::iterator it = s.begin(); it != s.end(); it++) 
		{
			//cout << it->first << " " << it->second << " " << mp[*it] << Endl;
			if (mpp.find(mp[*it]) == mpp.end()) 
			{
				ans++;
				mpp[mp[*it]] = 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}*/