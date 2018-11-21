/*#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
#include<queue>
#include<stack>
#include<utility>
#include<string>
#include<cstring>
#include<set>
#include<cmath>
#include<vector>
#include<fstream>
#include<map>
#include<list>
#include<algorithm>
#define SIZE 100005

typedef long long int LLD;
typedef unsigned long long int LLU;

using namespace std;

int prepareLPSArray(string pattern) {*/
	/* Returns the length of longest suffix which is also prefix of the string.
	Since, we have appended original string to its reverse, we would be able
	to get the length of longest suffix of original string which is also a
	palindrome. Below is the basic implementation of prefix array calculation
	used in KMP algorithm. */

	/*int len = pattern.length();
	vector<int> lsp(len);
	lsp[0] = 0;
	for (int j = 0, i = 1; i<len; i++) {
		if (pattern[i] == pattern[j]) {
			lsp[i] = j + 1;
			j++;
		}
		else {
			while (true) {
				if (j == 0 || pattern[j] == pattern[i])
					break;
				j = lsp[j - 1];
			}
			if (pattern[j] == pattern[i]) {
				lsp[i] = j + 1;
				j++;
			}
			else
				lsp[i] = 0;
		}
	}
	return lsp[len - 1];
}

string findPalin(string s) {
	string res = s;
	// Obtain the reverse of string.
	string revS = string(s.rbegin(), s.rend());
	// Find the no. of chars to be appended to original string.
	int noOfChars = s.length() - prepareLPSArray(revS + "#" + s);
	// Append noOfChars from original string to the result in reverse order.
	for (int i = noOfChars - 1; i >= 0; i--)
		res.append(1, s[i]);
	return res;
}

int main() {
	char str[SIZE];
	// Take input until EOF.
	while (scanf("%s", str) != EOF) {
		string s = str;
		// Find minimum length for s.
		cout << findPalin(s) << endl;
	}
	return 0;
}*/