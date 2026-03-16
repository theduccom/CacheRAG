#include<iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n,point=0,temp=0,out=0,i=0;
	vector <int>result;
	string a;
	cin >> n;
	while (i<n)
	{
		cin >> a;
		if (a == "HIT")
		{
			if (temp==3)
			{
				point++;
			}
			else
			{
				temp++;
			}
		}
		else if (a == "HOMERUN")
		{
			point = point+temp+1;
			temp = 0;
		}
		else if (a == "OUT")
		{
			out++;
			if (out == 3)
			{
				i++;
				out = 0;
				temp = 0;
				result.push_back(point);
				point = 0;
			}
		}
	}
	for (int j=0; j < n; j++)
	{
		cout << result.at(j) << endl;
	}
	return 0;
}