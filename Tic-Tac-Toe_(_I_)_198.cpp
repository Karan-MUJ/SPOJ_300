#include<iostream>

using namespace std;

int main198()
{
	int t, xc, oc, ow, xw;
	std::ios::sync_with_stdio(false);
	cin >> t;
	char arr[3][3];
	while (t--)
	{
		xc = 0;
		oc = 0;
		ow = 0;
		xw = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cin >> arr[i][j];
				if (arr[i][j] == 'O')
					oc++;
				if (arr[i][j] == 'X')
					xc++;
			}
		}	
		if (oc > xc)
		{
			cout << "no" << endl;
			continue;
		}
		if (xc > oc + 1)
		{
			cout << "no" << endl;
			continue;
		}
		for (int i = 0; i < 3; i++) 
		{
			if (arr[i][0] == arr[i][1])
				if (arr[i][1] == arr[i][2])
					if (arr[i][0] == 'O')
						ow++;
					else if (arr[i][0] == 'X')
						xw++;
			if (arr[0][i] == arr[1][i])
				if (arr[1][i] == arr[2][i])
					if (arr[0][i] == 'O')
						ow++;
					else if (arr[0][i] == 'X')
						xw++;
		}
		if (arr[0][0] == arr[1][1])
			if (arr[1][1] == arr[2][2])
				if (arr[1][1] == 'X')
					xw++;
				else if (arr[1][1] == 'O')
					ow++;
		if (arr[0][2] == arr[1][1])
			if (arr[1][1] == arr[2][0])
				if (arr[1][1] == 'X')
					xw++;
				else if (arr[1][1] == 'O')
					ow++;
		if (xw != 0 && ow != 0)
		{
			cout << "no" << endl;
			continue;
		}
		else 
		{
			if (ow > 1)
			{
				cout << "no" << endl;
				continue;
			}
			if (xw > 2) 
			{
				cout << "no" << endl;
				continue;
			}
		}
		if (xw != 0 && xc <= oc)
		{
			cout << "no" << endl;
			continue;
		}
		if (ow > 0 && xc != oc)
		{
			cout << "no" << endl;
			continue;
		}
		cout << "yes" << endl;
	}
	return 0;
}