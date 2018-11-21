/*#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#define mx 99999

// Remember we're not the least concerned about string after initialization all we're concerned about are indices. How you may ask? well after initialisation we have in lines 46-50 we have the current ranks of all the suffixes and the indices of all the suffixes and we build up our solution onto this data

using namespace std;

int SA[mx], tempSA[mx];							// Suffix array
int RA[mx], tempRA[mx];							// Rank of indices
int c[mx];										// count/frequency for radix sort
int LCP[mx], PLCP[mx], Phi[mx];
string str;
int n;

void counting_sort(int k)
{
int maxi = max(300, n);
memset(c, 0, sizeof(c));
for (int i = 0; i < n; i++)					// Getting the frequency of each rank so that we can place ranks in final array accordingly ref - CS Dojo radix sort
{
int a = ((i + k) < n) ? (RA[i + k]) : (0);
c[a]++;
}
for (int i = 0, sum = 0; i < maxi; i++)		// Shifting the ranks by one element for stable sort ref - same as above
{
int x = c[i];
c[i] = sum;
sum += x;
}
for (int i = 0; i < n; i++)					// sorting according to ranks or placing elements according to ranks
{
int a = ((SA[i] + k) < n) ? (RA[SA[i] + k]) : (0);
int b = c[a];							// This line gives us the index where we will place the current element or the numbe rof elements smaller than the given suffix rank ref - same CD Dojo video
c[a]++;									// Update the index for a given rank so another element with same rank occupies next index thus providing stable sort
tempSA[b] = SA[i];
}
for (int i = 0; i < n; i++)					// Updating the suffix array
SA[i] = tempSA[i];
}

void build_Suffix_Array()
{
for (int i = 0; i < n; i++)					// Initialize
{
RA[i] = str[i];
SA[i] = i;
}
for (int k = 1; k < n; k *= 2)
{
counting_sort(k);						// Sort according to secondary rank
counting_sort(0);						// Sort according to primary rank
int r = 0;								// The above sorting works beacuse we never change the contents all we do is we change the order
tempRA[SA[0]] = r = 0;
for (int i = 1; i < n; i++)
{
if (RA[SA[i]] == RA[SA[i - 1]] && RA[SA[i] + k] == RA[SA[i - 1] + k])		// RA[SA[i]] gives primary rank and RA[SA[i] + k] gives secondary rank If same pair => same rank r; otherwise, increase r
tempRA[SA[i]] = r;
else
tempRA[SA[i]] = ++r;
}
for (int i = 0; i < n; i++)
{
RA[i] = tempRA[i];
}
if (RA[SA[n - 1]] == n - 1) break;
}
}

void build_LCP()
{
Phi[SA[0]] = -1;
for (int i = 1; i < n; i++)
Phi[SA[i]] = SA[i - 1];
for (int i = 0, L = 0; i<n; i++)
{
if (Phi[i] == -1)
{
PLCP[i] = 0;
continue;
}
while (str[i + L] == str[Phi[i] + L])
L++;
PLCP[i] = L;
L = max(L - 1, 0);
}
for (int i = 0; i < n; i++)
LCP[i] = PLCP[SA[i]];
}

int main()
{
ios::sync_with_stdio(0);
int t;
cin >> t;
while (t--)
{
cin >> str;
str += '$';
n = str.size();
build_Suffix_Array();
build_LCP();
int ans = 0;
int string_len = n - 1;
ans = n * (n - 1);
ans /= 2;
for (int i = 1; i<n; i++)
{
ans -= LCP[i];
// ans += (string_len - SA[i] - LCP[i]);
}
cout << ans << endl;
}
return 0;
}*/