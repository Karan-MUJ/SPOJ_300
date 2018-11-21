#include<iostream>
#include<string>

using namespace std;

int main57()
{
	while(1)
	{		
		string temp;
		char var;
		char space = ' ';
		bool stat = true;
		getline(cin, temp);
		var = temp[0];
		if (var == '*')
			break;
		for (int i = 0; i < temp.size(); i++)
		{
			if (temp[i] == space) 
			{
				if (var <= 90 && var >= 65)
				{
					if (temp[i + 1] != var && temp[i + 1] != var + 32)
					{
						stat = false;
						break;
					}
				}
				if (var <= 122 && var >= 97)
				{
					if (temp[i + 1] != var && temp[i + 1] != var - 32)
					{
						stat = false;
						break;
					}
				}
			}

		}
		if (stat == 0)
			cout << "N" << endl;
		else
			cout << "Y" << endl;
	}
	return 0;
}