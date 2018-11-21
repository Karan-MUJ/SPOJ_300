#include<iostream>
#include<algorithm>

using namespace std;

bool p = 0;

void sol(/*int *arr[]*/ int arr[], int index, int n)
{
	int n1 = n - (index + 1);
	int *arr1 = new int[/*sizeof(arr) - (index + 1)*/n1];
	//int n = sizeof(arr) - (index + 1);
	for (int i = 0; i < n1; i++)
	{
		arr1[i] = arr[index + i + 1];
	}
	sort(arr1, arr1 + n1);
	for (int i = 0; i < n1; i++)
	{
		cout << arr1[i];
	}
	cout << endl;
}

void po(int arr[], int n)
{	
	int minmax = 0;
	for (int i = n - 2; i >= 0; i--)
	{		
			if (arr[i+1] > arr[i])
			{
				minmax = i+1;
				for (int k = i+1; k < n; k++)
				{
					if (arr[k] > arr[i] && arr[k] < arr[minmax])
					{
						minmax = k;
					}
				}
				p = 1;
				int x = 0;
				x = arr[minmax];
				arr[minmax] = arr[i];
				arr[i] = x;
				for (int w = 0; w <= i; w++)
				{
					cout << arr[w];
				}
				sol(arr, i, n);
				return;
			}	
	}
}

int main92()
{
	int t = 0; 
	std::ios::sync_with_stdio(false);
	cin >> t;
	while (t--)
	{
		p = 0;
		int n = 0, x = 0;
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			arr[i] = x;
		}
		po(arr, n);
		if (!p)
		{
			cout << "-1" << endl;
		}
	}
	return 0;
}