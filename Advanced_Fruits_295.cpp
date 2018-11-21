/*#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

bool sArr[105], tArr[105];
string s, t;
int sLength, tLength, matrix[105][105];

void prepareBoolArray() 
{
	//  Initialize sArr and tArr.
	memset(sArr, false, sizeof(sArr));
	memset(tArr, false, sizeof(tArr));
	//  Initialize the matrix to calculate LCS.
	for (int i = 0; i <= sLength; i++)
		matrix[i][0] = 0;
	for (int j = 0; j <= tLength; j++)
		matrix[0][j] = 0;
	//  Calculate the matrix for LCS.
	for (int i = 1; i <= sLength; i++) 
	{
		for (int j = 1; j <= tLength; j++) 
		{
			if (s[i - 1] == t[j - 1])
				matrix[i][j] = matrix[i - 1][j - 1] + 1;
			else
				matrix[i][j] = max(matrix[i - 1][j], matrix[i][j - 1]);
		}
	}
	//  Backtrack to find the common characters.
	int x = sLength, y = tLength;
	while (true) 
	{
		if (x == 0 || y == 0)
			break;
		//  If two characters are equal, 
		//    move to diagonally opposite cell and mark the current position in sArr and tArr as true.
		//  else, move to the cell [x-1][y] or [x][y-1], whichever has the maximum value.
		if (s[x - 1] == t[y - 1]) 
		{
			sArr[x - 1] = true;
			tArr[y - 1] = true;
			x--; y--;
		}
		else
			(matrix[x - 1][y] >= matrix[x][y - 1]) ? (x--) : (y--);
	}
}

int main() 
{
	//  Take input till EOF.
	while (cin >> s) 
	{
		string res = "";
		cin >> t;
		sLength = s.size(), tLength = t.size();
		//  Populate sArr and tArr.
		prepareBoolArray();
		//  Merge two strings together.
		int i = 0, j = 0, idx = 0;
		while (i < sLength && j < tLength) 
		{
			int k = i, l = j;
			//  Add the characters from first string to resultant string which are not part of LCS.
			for (; k < sLength && !sArr[k]; k++)
				res += s[k];
			//  Add the characters from second string to resultant string which are not part of LCS.
			for (; l < tLength && !tArr[l]; l++)
				res += t[l];
			//  Add the characters to resultant string which are part of LCS.
			while (k < sLength && l < tLength && sArr[k] && tArr[l]) 
			{
				res += s[k];
				k++;
				l++;
			}
			i = k;
			j = l;
		}
		//  Add remaining characters from the first string, if any.
		while (i < sLength)
			res += s[i++];
		//  Add remaining characters from the second string, if any.
		while (j < tLength)
			res += t[j++];
		char zero = 0;
		res += zero;
		cout << res << endl;
	}
	return 0;
}*/