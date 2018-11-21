#include<iostream>

using namespace std;

int main96()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		cin >> n;
		cin >> n;
		if (n)
		{
			cout << "Pagfloyd wins." << endl;
		}
		else
		{
			cout << "Airborne wins." << endl;
		}
	}
	return 0;
}