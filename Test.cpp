#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

vector<string> prettyJSON(string str)
{
	vector <string> arr;
	int n = str.size(), idx = 0;
	if (n == 0) 
	{
		return arr;
	}
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	string cur = "", indent = "";
	while (idx < n) 
	{
		cur.push_back(str[idx]);
		switch (str[idx]) 
		{
			case ',': 
			{
				idx++;
				arr.push_back(cur);
				cur = indent;
				break;
			}
			case ':': 
			{
				idx++;
				if (str[idx] == '{' || str[idx] == '[')
				{
					arr.push_back(cur);
					cur = indent;
				}
				break;
			}
			case '{':
			case '[': 
			{
				idx++;
				if (idx < n && !(str[idx] == '}' || str[idx] == ']')) 
				{
					indent.push_back('\t');
				}
				arr.push_back(cur);
				cur = indent;
				break;
			}
			case ']':
			case '}': 
			{
				idx++;
				if (str[idx] == ',')
					break;
				if (str[idx] == ']' || str[idx] == '}') 
				{
					if (!indent.empty())
						indent.pop_back();
				}
				arr.push_back(cur);
				cur = indent;
				break;
			}		
			default: 
			{
				idx++;
				/*if (str[idx] == ',')
					break;*/
				if (idx < n && (str[idx] == '}' || str[idx] == ']'))
					if (!indent.empty())
					{
						arr.push_back(cur);
						if (!indent.empty())
							indent.pop_back();
						cur = indent;
						break;
					}
				/*if (str[idx] == '{' || str[idx] == '[')			//opening braces won't come after a normal character without ',' or ':' which we've already handled
				{
					arr.push_back(cur);
					//indent.push_back('\t');
					cur = indent;
					break;
				}*/
				break;
			}
		}
	}
	return arr;
}

int main()
{
	//string a = "a 123";
	/*vector <vector <int>> arr;
	arr.resize(3);
	arr[0].push_back(3);
	arr[0].push_back(4);
	arr[0].push_back(1);
	arr[0].push_back(2);*/
	/*vector <int> a, b;
	a.push_back(1);
	a.push_back(10);*/
	/*a.push_back(67);
	a.push_back(90);
	arr[1].push_back(10);
	arr[1].push_back(11);
	arr[1].push_back(16);
	arr[1].push_back(20);
	arr[2].push_back(23);
	arr[2].push_back(30);
	arr[2].push_back(34);
	arr[2].push_back(50);
	searchMatrix(arr, 20);*/
	// your code goes here
	//paint(2, 5, a);
	prettyJSON("[foo, { bar:[baz,null,1.0,2] }]");
	return 0;
}