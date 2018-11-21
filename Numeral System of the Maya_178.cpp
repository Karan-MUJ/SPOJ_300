#include<iostream>
#include<string>

using namespace std;

string maya[20] = {	"S", ".", "..", "...", "....", "-", ". -", ".. -", "... -", ".... -", "- -", ". - -", ".. - -", "... - -", ".... - -", "- - -", ". - - -", ".. - - -", "... - - -", ".... - - -"
};

int pwr[7] = { 1, 20, 360, 7200, 144000, 2880000, 57600000 };

int main178()
{
	int n;
	long long sol = 0;
	cin >> n;
	if (n == 0)
		return 0;
	string s;
	for (int i = n - 1; i >= 0; i++)
	{
		cin >> s;
		for (int j = 0; j < 20; j++)
		{
			if (s.compare(maya[j]) == 0)
			{
				sol += pwr[i] * j;
			}
		}
		cout << sol << endl;
	}	
	return 0;
}